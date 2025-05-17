class Solution {
public:
    bool check(string target, vector<string>k){
        for(int i = 0; i < k.size(); i++){
            if(target == k[i]) return true;
        }
        return false;
    }
    bool wordPattern(string pattern, string s) {
        map<char,string>mp;
        vector<string>v;
        string y;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                v.push_back(y);
                y = "";
            }
            else{
                y += s[i];
            }
        }
        v.push_back(y);
        if(pattern.size() != v.size()) return false;
        vector<string>k;
        for(int i = 0; i < pattern.size(); i++){
            if(mp.find(pattern[i]) == mp.end()){
                if(check(v[i], k)) return false;
                else mp[pattern[i]] = v[i];
            }
            k.push_back(v[i]);
        }
        for(int i = 0; i < v.size(); i++){
            if(mp[pattern[i]] != v[i]) return false;
        }
        
        return true;

    }
};