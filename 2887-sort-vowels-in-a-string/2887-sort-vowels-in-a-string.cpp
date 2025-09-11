class Solution {
public:
    string sortVowels(string s) {
        string vowels = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U' 
                or s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' ){
            vowels += s[i];
                }
        }
        sort(vowels.begin(), vowels.end());
        int u = 0;
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U' 
                or s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' ){
                    ans += vowels[u];
                    u += 1;
                }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};