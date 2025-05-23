class Solution {
public:
    int sumCheck(vector<int>v){
        int sum = 0;
        for(int i = 0; i < v.size(); i++){
            sum += v[i];
        }
        return sum;
    }
    int minOperations(vector<int>& nums, int k) {
        // int c = 0;
        // int sum = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     sum += nums[i];
        // }
        // if(sum < k) return k - 1;
        // while(1){
        //     if(sumCheck(nums,k) == true) return c;
        //     for(int i = 0; i < nums.size(); i++){
        //         if(nums[i] > k){
        //             nums[i] = nums[i] - 1;
        //             c += 1;
        //         }
        //         if(sumCheck(nums,k) == true) return c;
        //     }
        // }
        return sumCheck(nums) % k;
    }
};