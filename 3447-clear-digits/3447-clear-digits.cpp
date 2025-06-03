class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(int i = 0; i < s.size(); i++){
            if(!st.empty() and int(s[i]) >= 48 and int(s[i]) <= 57 ){
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        string u = "";
        while(!st.empty()){
            u += st.top();
            st.pop();
        }
        reverse(u.begin(), u.end());
        return u;
    }
};