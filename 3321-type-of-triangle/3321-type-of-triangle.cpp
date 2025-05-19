class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
        if((b + c) > a and (a + b) > c and (a + c) > b){
            if(a == b and b == c and c == a){
                return "equilateral";
            }
            else if(a != b and b != c and c != a ){
                return "scalene";
            }
            else{
                return "isosceles";
            }
        }
        return "none";
    }
};