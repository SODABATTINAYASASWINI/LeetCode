class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        double sum = 0;
        int c = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            c += 1;
            if(c == k){
                c -= 1;
                ans = max(ans, sum / k);
                sum -= nums[i + 1 - k];
            }
        }
        return ans;
    }
};