class Solution {
public:
    string resultingString(string s) {
        stack<char>st;
        string ns = "";
        for(int i = 0; i < s.size(); i++){
            if(!st.empty() and ((st.top() - '0' + 1 == s[i] - '0') or 
                (st.top() - '0' - 1 == s[i] - '0') or (st.top() == 'z' and s[i] == 'a') or st.top() == 'a' and s[i] == 'z')){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ns += st.top();
            st.pop();
        }
        reverse(ns.begin(), ns.end());
        return ns;
    }
};