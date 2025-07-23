class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l = 0;
        int h = s.size();
        vector<int>res;
        for(int i = 0 ;i < s.size(); i++){
            if(s[i] == 'I'){
                res.push_back(l ++);
            }
            else{
                res.push_back(h --);
            }
        }
        res.push_back(l);
        return res;
    }
};