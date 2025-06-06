class Solution {
public:
    vector<vector<int>>ans;
    void check(TreeNode* root, int t, int sum, vector<int>v){
        if(root == NULL) return;
        v.push_back(root->val);
        sum += root->val;
        if(root->left == NULL and root->right == NULL and sum == t){
            ans.push_back(v);
            v.pop_back();
        }
        check(root->left, t,sum, v);
        check(root->right, t, sum, v);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>k;
        check(root, targetSum, 0, k);
        return ans;
    }
};