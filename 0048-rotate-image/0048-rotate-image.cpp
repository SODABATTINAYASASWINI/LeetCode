class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<vector<int>>ans;
        for(int i = 0; i < c; i ++){
            vector<int>p;
            for(int j = 0; j < r; j ++){
                p.push_back(matrix[j][i]);
            }
            reverse(p.begin(), p.end());
            ans.push_back(p);
        }
        for(int i = 0; i < r; i ++){
            matrix[i] = ans[i];
        }
        matrix = ans;
    }
};