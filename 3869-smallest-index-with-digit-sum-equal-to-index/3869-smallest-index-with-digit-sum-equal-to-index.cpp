class Solution {
public:
    bool check(int tar, int ind){
        int sum = 0;
        while(tar != 0){
            sum += tar % 10;
            tar = tar / 10;
        }
        if(sum == ind) return true;
        else return false;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(check(nums[i], i)) return i;
        }
        return -1;
    }
};