class Solution {
public:
    bool rec(int n){
        if(n == 1) return true;
        if(n % 3 != 0 ) return false;
        return rec(n/3);
    }
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        bool res = rec(n);
        // cout << res;
        if(res) return true;
        else return false;
    }
};