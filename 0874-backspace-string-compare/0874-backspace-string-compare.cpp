class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        for(int i = 0; i < s.size(); i++){
            if(st1.size() != 0 and s[i] == '#'){
                st1.pop();
            }
            else if(s[i] != '#'){
                st1.push(s[i]);
            }
        }
        for(int i = 0; i < t.size(); i++){
            if(st2.size() != 0 and t[i] == '#'){
                st2.pop();
            }
            else if(t[i] != '#'){
                st2.push(t[i]);
            }
        }
        string ns1 = "";
        string ns2 = "";
        while(!st1.empty()){
            ns1 += st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            ns2 += st2.top();
            st2.pop();
        }
        if(ns1 == ns2) return true;
        return false;
    }
};