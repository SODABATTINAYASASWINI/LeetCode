class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string ns = "";
        while(!st.empty()){
            ns += st.top();
            st.pop();
        }
        // string ns = "";
        reverse(ns.begin(), ns.end());
        return ns;
    }
};