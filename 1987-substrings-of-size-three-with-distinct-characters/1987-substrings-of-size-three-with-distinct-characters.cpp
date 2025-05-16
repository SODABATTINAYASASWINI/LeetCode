class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size() == 1 or s.size() == 2) return 0;
        int i = 0, j = 1, k = 2;
        int c = 0;
        while(k != s.size()){
            if((s[i] != s[j]) and (s[i] != s[k]) and (s[j] != s[k])){
                c += 1;
            }
            // else{
                k += 1;
                j += 1;
                i += 1;
            // }
        }
        return c;
    }
};