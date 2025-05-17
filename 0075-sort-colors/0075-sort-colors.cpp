class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid = 0, h = nums.size() - 1, l = 0;
        while(mid <= h){
            if(nums[mid] == 0){
                swap(nums[mid], nums[l]);
                l += 1;
                mid += 1;
            }
            else if(nums[mid] == 1){
                mid ++;
            }
            else{
                swap(nums[mid], nums[h]);
                h -= 1;
            }
        }
        // return nums;
    }
};