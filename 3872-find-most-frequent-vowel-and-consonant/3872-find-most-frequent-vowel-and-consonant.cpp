class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]] += 1;
        }
        map<char,int> :: iterator it;
        int vc = 0;
        int cc = 0;
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->first == 'a' or it->first == 'e' or it->first == 'i' or
                    it->first == 'o' or it->first == 'u' ){
                        if(it->second > vc) vc = it->second;
                    }
            else{
                if(it->second > cc) cc = it->second;
            }
        }
        return vc + cc;
    }
};