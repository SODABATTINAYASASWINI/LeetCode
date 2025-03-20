class Solution {
public:
    bool check(int num){
        if(num == 1) return false;
        for(int i = 2; i * i <= num; i ++){
            if(num % i == 0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i ++){
            for(int j = 0; j < nums.size(); j ++){
                if(i == j){
                    if(check(nums[i][j])) ans = max(ans, nums[i][j]);
                }
            }
        }
        int i = 0, j = nums.size() - 1;
        while(i < nums.size()){
            cout << i << " " << j << endl;
            if(check(nums[i][j])) ans = max(ans, nums[i][j]);
            i++;
            j--;
        }
        if(ans == INT_MIN) return 0;
        else return ans;
    }
};