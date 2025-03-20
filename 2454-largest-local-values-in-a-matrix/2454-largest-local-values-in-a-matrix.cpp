class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        int z=0;      
        vector<vector<int>>ans;
        for(int i = 0; i < grid.size(); i ++){
            vector<int>dummy;
            for(int j = 0; j < grid.size(); j ++){
                if(i + 3 <= n and j + 3 <= n){
                    int maxi = INT_MIN ;               
                    for(int k = i; k < i + 3; k ++){
                        for (int l = j; l < j + 3; l ++){
                            if(grid[k][l] > maxi){
                                maxi = grid[k][l];
                            } 
                        }
                    }
                   dummy.push_back(maxi);
                }            
            }
            if(dummy.size()!=0)
             ans.push_back(dummy);
        }
        return ans;
    }
};