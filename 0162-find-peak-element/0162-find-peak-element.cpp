class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int h = nums.size() - 1, l = 0, mid;
        while (l <= h) {
            mid = l + (h - l) / 2; 
        if ((mid == 0 || nums[mid] > nums[mid - 1]) &&
            (mid == nums.size() - 1 || nums[mid] > nums[mid + 1])) {
            return mid;
        } else if (mid < nums.size() - 1 && nums[mid] < nums[mid + 1]) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    return -1;
    }
};