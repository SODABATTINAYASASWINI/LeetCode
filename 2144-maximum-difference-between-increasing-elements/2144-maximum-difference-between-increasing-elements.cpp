class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[j] - nums[i] > maxi) maxi = nums[j] - nums[i];
            }
        }
        if(maxi > 0) return maxi;
        else return -1;
    }
};