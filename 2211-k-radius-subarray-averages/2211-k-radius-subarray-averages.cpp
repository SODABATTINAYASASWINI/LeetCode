class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k == 0) return nums;
        vector<int>v(nums.size(), -1);
        if(k > nums.size()) return v;
        int i = k;
        int j  = i - k - 1;
        int f = nums.size() - k;
        long long  sum = 0;
        int c = 0;
        while(i < f){
            if(j == i + k){
                int avg = sum / c;
                v[i] = avg;
                c -= 1;
                sum -= nums[i - k];
                i += 1;
            }
            j += 1;
            if(j < nums.size()){
                sum += nums[j];
                c += 1;
            }
        } 
        return v;
    }
};