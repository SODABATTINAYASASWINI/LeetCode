class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>cs(26, 0);
        vector<int>ct(26, 0);
        for(int i = 0; i < s.size(); i ++){
            cs[s[i] - 'a'] ++;
        }
        for(int i = 0; i < s.size(); i ++){
            ct[t[i] - 'a'] ++;
        }
        int c = 0;
        for(int i = 0; i < 26; i ++){
            c += abs(cs[i] - ct[i]);
        }
        return c / 2;

    }
}; 