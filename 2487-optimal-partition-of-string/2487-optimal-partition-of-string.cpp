class Solution {
public:
    int partitionString(string s) {
        map<char,int>mp;
        int i = 0, j = 0, c = 0;
        while(j < s.size()){
            // cout << j << " " ;
            if(mp.find(s[j]) != mp.end()){
                c += 1;
                i = j;
                mp.clear();
            }
            else{
                mp[s[j]] += 1;
                j += 1;
            }
           
        }
        return c + 1;
    }
};