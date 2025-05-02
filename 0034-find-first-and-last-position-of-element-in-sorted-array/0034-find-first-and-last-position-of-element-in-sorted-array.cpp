class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0,h = nums.size() - 1;        
        int fc = -1;
        while(l <= h){
            int m = (l + h) / 2;
            if(nums[m] == target){
                fc = m;
                h = m - 1;
            }
            else if(nums[m] < target) l = m + 1;
            else h = m - 1;
        }
        int l2 = 0, h2 = nums.size() - 1, lc = -1;
        while(l2 <= h2){
            int mid = (l2 + h2) / 2;
            if(nums[mid] == target){
                lc = mid;
                l2 = mid + 1;
            }
            else if(nums[mid] < target) l2 = mid + 1;
            else h2 = mid - 1;
        }
        return {fc,lc};
    }
};