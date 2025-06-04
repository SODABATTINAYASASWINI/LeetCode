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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode* >q;
        q.push(root);
        vector<vector<int>>v;
        int c = 0;
        while(!q.empty()){
            c += 1;
            int n = q.size();
            vector<int>ve;
            for(int i = 0; i < n; i++){
                TreeNode* node = q.front();
                q.pop();
                ve.push_back(node->val);
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                // if(c % 2 != 0){
                //     reverse(ve.begin(), ve.end());
                // }
            }
            if(c % 2 == 0){
                    reverse(ve.begin(), ve.end());
            }
            v.push_back(ve);
        }
        
        return v;
    }
};