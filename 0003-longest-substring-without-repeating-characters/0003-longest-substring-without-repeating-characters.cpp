class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int i = 0, j = 0;
        int maxi = 0;
        while(j < s.size()){
            if(mp.find(s[j]) == mp.end()){
                mp[s[j]]++;
                j ++;
            }
            else{
                maxi = max(maxi, (int)mp.size());
                mp.erase(s[i]);
                i ++;
            }
        }
        maxi = max(maxi, (int)mp.size());
        return maxi;
    }
};