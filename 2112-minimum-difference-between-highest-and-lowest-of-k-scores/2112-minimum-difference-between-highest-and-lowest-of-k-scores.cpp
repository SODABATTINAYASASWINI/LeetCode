class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k == 1) return 0;
        int mini = INT_MAX;
        int diff = 0;
        sort(nums.begin(), nums.end());
        int c = 0;
        int i = 0, j = k - 1;
        while(j < nums.size()){
            diff = min(abs(nums[i] - nums[j]), mini);
            i += 1;
            j += 1;
            mini = diff;
        }
        return diff;
    }
};