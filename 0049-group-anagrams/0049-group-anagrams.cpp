class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int> >mp;
        map<string,vector<int> >::iterator it;
        for(int i = 0 ;i < strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        vector<vector<string>>v;
        for(it = mp.begin();it != mp.end();it++){
            vector<string>dummy;
            for(int i = 0;i < it->second.size() ;i++){
                dummy.push_back(strs[it->second[i]]);
            }
            v.push_back(dummy);
        }
        return v;
    }
};