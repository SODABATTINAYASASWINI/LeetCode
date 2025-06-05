/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int uu = 10001;
    void check(TreeNode* root, int t, int sum){
        if(root == NULL) return;
        // sum + root->val;
        if(!root->left && !root->right){
            if(sum+root->val == t) uu = sum+root->val;
            return;
        }
        check(root->left,t,sum + root->val);
        check(root->right,t,sum + root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return 0;
        int sum = 0;
        check(root, targetSum, sum);
        cout << uu;
        if(uu == targetSum) return true;
        else return false;
    }
};