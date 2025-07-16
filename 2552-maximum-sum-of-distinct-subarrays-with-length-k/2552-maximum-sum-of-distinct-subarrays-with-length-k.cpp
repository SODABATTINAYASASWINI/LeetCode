class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        long long sum = 0;
        int i = 0, j = 0;
        long long ans = 0, c = 0;
        while(j < nums.size()){
            mp[nums[j]] += 1;
            sum += nums[j];

            while(mp[nums[j]] > 1){
                mp[nums[i]] -= 1;
                sum -= nums[i];
                i += 1;
            }
            if(j - i + 1 == k){
                ans = max(ans, sum);
                sum -= nums[i];
                mp[nums[i]] -= 1;
                i += 1;
            }
            j += 1;
        }
        return ans;
    }
};