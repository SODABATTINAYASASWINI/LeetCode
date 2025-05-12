class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() < 2) return *max_element(nums.begin(), nums.end());
        vector<int>dp(nums.size());
        dp[0] = nums[0];
        dp[1] = max(dp[0], nums[1]);
        for(int i = 2; i < nums.size(); i++){
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[dp.size() - 1];
    }
};