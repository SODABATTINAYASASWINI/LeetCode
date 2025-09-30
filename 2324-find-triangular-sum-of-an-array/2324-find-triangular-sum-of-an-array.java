class Solution {
    public int triangularSum(int[] nums) {
        // int[] arr = {};
        while(true){
            if(nums.length == 1) {
                return nums[0];
            }
            else{
                int[] arr = new int[nums.length - 1]; 
                for(int i = 0; i < nums.length - 1; i++){
                    arr[i] = (nums[i] + nums[i + 1]) % 10;
                }
                nums = arr;
            }
        }

    }
}