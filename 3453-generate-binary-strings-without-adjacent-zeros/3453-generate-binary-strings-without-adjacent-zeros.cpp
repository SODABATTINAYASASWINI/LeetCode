class Solution {
public:
    string binary(int n, int count){
        string s = "";
        int c = 0;
        while(1){
            c += 1;
            if(c == count + 1) break;
            s += to_string(n & 1);
            n = n >> 1;
        }
        cout << s << " ";
        return s;
    }
    bool check(string s){
        for(int i = 0; i < s.size() - 1; i ++){
            if(s[i] == '0' and s[i + 1] == '0') return false;
        }
        return true;
    }
    vector<string> validStrings(int n) {
        if(n == 1) return {"0", "1"};
        int t = pow(2,n);
        vector<string>v;
        for(int i = 1; i <= t; i ++){
            string s = binary(i, n);
            if(check(s) and s.size()  == n) v.push_back(s);
        }
        return v;
    }
};