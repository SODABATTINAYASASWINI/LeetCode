class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0, c = 0, maxi = INT_MIN;
        int zc = 0, oc = 0;
        while(j < nums.size()){
            if(nums[j] == 0){
                c += 1;
                zc += 1;
            }
            else{
                oc += 1;
            }
            if(c > k){
                maxi = max(maxi,j-i);
                if(nums[i] == 0){
                    c -= 1;
                    zc -= 1;
                }
                else {
                    oc -= 1;
                }
                i += 1;
            }
            j += 1;
        }
        maxi = max(maxi,j-i);
       
        return maxi;
    }
};