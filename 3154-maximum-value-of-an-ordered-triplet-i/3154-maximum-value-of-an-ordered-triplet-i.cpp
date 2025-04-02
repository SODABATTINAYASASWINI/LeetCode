class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = LLONG_MIN;
        for(int i = 0; i < nums.size(); i ++){
            for(int j = i + 1; j < nums.size(); j ++){
                for(int k = j + 1; k < nums.size(); k ++){
                    // ans = max(((nums[i] - nums[j]) * nums[k]), ans);
                    ans = max(1LL * (nums[i] - nums[j]) * nums[k], ans);
                }

            }
        }
        if(ans < 0) return 0;
        return ans;
    }
};