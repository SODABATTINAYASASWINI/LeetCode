class Solution {
    boolean isTriangle(int a , int b, int c){
        if(a + b > c && b + c > a && c + a > b){
            return true;
        }
        else{
            return false;
        }
    }
    public int largestPerimeter(int[] nums) {
        int maxi = 0;
        Arrays.sort(nums);
        for(int i = 0; i < nums.length - 2; i++){
            if(isTriangle(nums[i] , nums[i + 1], nums[i + 2])){
                maxi = Math.max(maxi, nums[i] + nums[i + 1] + nums[i + 2]);
            }
        }
        return maxi;
    }
}