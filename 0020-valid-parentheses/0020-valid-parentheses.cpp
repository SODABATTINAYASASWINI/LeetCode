class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i = 0 ;i < s.size();i++){
            if(s[i] == '(' or s[i] == '[' or s[i] == '{'){
                st.push(s[i]);
            }
            if(st.empty() == 1 and (s[i] == '}' or s[i] == ']' or s[i]==')')){
                return false;
            }
            if(st.top() == '(' and (s[i] == ']' or s[i] == '}' )) return false;
            if(st.top() == '[' and (s[i] == ')' or s[i] == '}' )) return false;
            if(st.top() == '{' and (s[i] == ']' or s[i] == ')' )) return false;

            else{
                if(s[i] == ')'){
                    if(st.top() == '('){
                        st.pop();
                    }
                }
                else if(s[i] == ']'){
                    if(st.top() == '['){
                        st.pop();
                    }
                } 
                else if(s[i] == '}'){
                    if(st.top() == '{'){
                        st.pop();
                    }
                }
                
            }
        }
        if(st.empty() == 1){
            return true;
        }
        else{
            return false;
        }
    }
};