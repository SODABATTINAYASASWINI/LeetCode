class Solution {
public:
    string makeFancyString(string s) {
        string n = "";
        vector<int>v;
        int i = 0, j = 1, k = 2;
        for(int i = 1; i < s.size() - 1; i++){
            if(s[i - 1] == s[i] and s[i] == s[i + 1] and s[i+1] == s[i-1]){
                v.push_back(i);
            }
        }
        sort(v.rbegin(), v.rend());
        for(int i = 0; i < v.size(); i++){
            s.erase(s.begin() + v[i]);
        }
        return s;
    }
};