class Solution {
public:
    bool check(vector<int>v, int n){
        sort(v.begin(), v.end());
        int c = 0;
        for(int i = 0; i < v.size() - 1; i++){
            if(v[i] < v[i + 1] and v[i] <= n){
                c ++;
            }
        }
        if(v[v.size() - 1] <= n) c += 1;
        if(c == v.size()) return true;
        else return false;
    }
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; i ++){
            if(check(matrix[i], n) == false){
                return false;
            }
        }
        for(int i = 0; i < n; i ++){
            vector<int>v;
            for(int j = 0; j < n; j ++){
                v.push_back(matrix[j][i]);
            }
            if(check(v, n) == false){
                return false;
            }
        }
        return true;
    }
};