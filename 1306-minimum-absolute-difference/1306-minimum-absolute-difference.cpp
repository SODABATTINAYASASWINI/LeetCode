class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int min = abs(arr[0] - arr[1]);
        vector<vector<int>>ans;
        vector<int>v;
        for(int i = 0; i < arr.size() - 1; i++){
           int pre =  abs(arr[i] - arr[i + 1]);
                if(pre == min){
                    ans.push_back({arr[i], arr[ i + 1]});
                }
                if(pre < min){
                    min = pre;
                    ans.clear();
                    ans.push_back({arr[i], arr[i + 1]});
                }
            }
    
        return ans;
    }
};