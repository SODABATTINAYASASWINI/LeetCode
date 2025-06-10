class Solution {
public:
    int maxDifference(string s) {
        map<char, int>mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        int first = INT_MIN; 
        char fc;
        int ans = INT_MIN;
        int i = 0;
        map<char, int>:: iterator it;
        while(i != 2){
            for(it = mp.begin(); it != mp.end(); it++){
                if(i == 0){
                    if(it -> second % 2 != 0){
                        if(it->second > first){
                            first = it->second;
                            fc = it->first;
                        }
                    }
                }
                else{
                    if(it->second % 2 == 0)
                    ans = max(ans, first - it->second);
                }
            }
            mp.erase(fc);
            cout << fc;
            i += 1;
        }
        // cout << first << " " << second;
        return ans;
    }
};