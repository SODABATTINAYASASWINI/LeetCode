class Solution {
public:
    string decodeString(string s) {
        stack<char>st;
        string res = "";
        int i = 0; 
        while(i < s.size()){
            if(s[i] != ']'){
                st.push(s[i]);
                i += 1;
            }
            else{
                string y = "";
                while(!st.empty() and st.top() != '['){
                    y += st.top();
                    st.pop();
                }
                st.pop();
                string ns = "";
                while(!st.empty() && isdigit(st.top())){
                    ns += st.top();
                    st.pop();
                }
                reverse(ns.begin(), ns.end());
                int num = stoi(ns);
                while(num --){
                    for(int j = y.size() - 1; j >= 0; j--){
                        st.push(y[j]);
                    }
                }
                i += 1;
            }
            if(i >= s.size()){
                while(!st.empty()){
                    res = st.top() + res;
                    st.pop();
                }
                break;
            }
        }
        return res;
    }
};