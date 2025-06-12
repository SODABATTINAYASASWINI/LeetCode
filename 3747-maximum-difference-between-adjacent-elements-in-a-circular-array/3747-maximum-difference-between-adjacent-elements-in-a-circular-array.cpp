class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans = INT_MIN;
        int i = 0;
        int curr = 0;
        while(1){
            if(i == nums.size() - 1){
                curr = abs(nums[i] - nums[0]);
                ans = max(curr,ans);
                break;
            }
            else{
                curr = abs(nums[i] - nums[i + 1]);
            }
            ans = max(curr, ans);
            i += 1;
        }
        return ans;
    }
};