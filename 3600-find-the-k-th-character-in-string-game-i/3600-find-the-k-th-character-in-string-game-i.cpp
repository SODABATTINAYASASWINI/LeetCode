class Solution {
public:
    char rec(int k, string s){
        if(s.size() > k) return s[k - 1];
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            int t = int(s[i]);
            if(s[i] == 'z') temp += 'a';
            else {
                temp += char(t + 1);
            }
        }
        s += temp;
        // cout << s << " ";
        return rec(k,s);
    }
    char kthCharacter(int k) {
        return rec(k,"a");
        // return res;
    }
};