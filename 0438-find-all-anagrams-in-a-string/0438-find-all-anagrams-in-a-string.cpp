class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int>mp;
        for(int i = 0; i < p.size(); i++){
            mp[p[i]] += 1;
        }
        map<char,int>ms;
        vector<int>v;
        int i = 0, j = 0;
        while(j < s.size()){
            ms[s[j]] += 1;
            if(j - i + 1 == p.size()){
                if(mp == ms){
                    v.push_back(i);
                }
                if(ms[s[i]] == 1){
                    ms.erase(s[i]);
                }
                else{
                    ms[s[i]] -= 1;
                }
                i += 1;
            }
            j += 1;
        }
        return v;
    }
};