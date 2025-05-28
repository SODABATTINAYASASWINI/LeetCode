class Solution {
public:
    bool check(int n){
        int c = 0;
        int tc = 0;
        while(n != 0){
            if(n & 1){
                c += 1;
            }
            n = n >> 1;
            tc += 1;
        }
        if(c == tc) return true;
        else return false;
    }
    int smallestNumber(int n) {
        while(1){
            if(check(n)) return n;
            n += 1;
        }
    }
};