class Solution {
public:
    char summy(string s){
        int sum = 0;
        // string u = 'abcdefghijklmnopqrstuvwxyz'
        for(int i = 0; i < s.size(); i ++){
            sum += int(s[i]) - 'a';
        }
        sum %= 26;
        return char(97 + sum);
    }
    string stringHash(string s, int k) {
        string ans = "", temp = "";
        int i = 0, j = 0, c = 0;
        while(j < s.size()){
            temp += s[j];
            c += 1;
            j += 1;
            if(c == k){
                ans += summy(temp);
                c = 0;
                i += k;
                temp = "";
            }
        }
        return ans;
    }
};