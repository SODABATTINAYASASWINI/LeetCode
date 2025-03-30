class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double mini = 10000000;
        sort(nums.begin(), nums.end());
        // nums.pop_back();
        while(nums.size() != 0){
            if(mini > (nums[0] + nums[nums.size() - 1] ) / 2.0){
                mini = (nums[0] + nums[nums.size() - 1] ) / 2.0;
            }
            nums.pop_back();
            nums.erase(nums.begin());
        }
        return mini;
    }
};