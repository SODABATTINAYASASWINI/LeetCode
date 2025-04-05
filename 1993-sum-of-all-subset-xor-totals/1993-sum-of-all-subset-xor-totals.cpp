class Solution {
public:
    int check(vector<int>v){
        int x = 0;
        for(int i = 0; i < v.size(); i ++){
            x ^= v[i];
        }
        return x;
    }
    int subsetXORSum(vector<int>& nums) {
        // vector<vector<int>>v;
        int sum = 0;
        int s = pow(2,nums.size());
        for(int i = 0; i < s; i++){
            vector<int>t;
            int n = i;
            for(int j = 0; j < nums.size(); j ++){
                if(n & 1 == 1){
                    t.push_back(nums[j]);
                }
                n = n >> 1;
            }
            sum += check(t);
        }
        return sum;
    }
};