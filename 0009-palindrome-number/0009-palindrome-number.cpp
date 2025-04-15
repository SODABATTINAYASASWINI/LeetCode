class Solution {
public:
    bool isPalindrome(int x) {
        long int t,r=0,p=x;
        if(x<0){
            return false;
        }
        else{
            while(x>0){
                t=x%10;
                r=(r*10)+t;
                x=x/10;
            }
            if(r==p){
                return true;
            }
            else{
                return false;
            }
        }
    }
};