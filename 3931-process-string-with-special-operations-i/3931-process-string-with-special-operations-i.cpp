class Solution {
public:
    string dothis(vector<char>v){
        string y = "";
        for(int i = 0; i < v.size(); i++){
            y += v[i];
        }
        return y;
    }
    string processStr(string s) {
        vector<char>st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '#' and s[i] != '%' and s[i] != '*'){
                st.push_back(s[i]);
            }
            else if(s[i] == '*' and st.size() != 0){
                st.pop_back();
            }
            else if(s[i] == '%' and st.size() != 0){
                reverse(st.begin(), st.end());
            }
            else{
                string y = dothis(st);
                for(int k = 0; k < y.size(); k++){
                    st.push_back(y[k]);
                }
            }
        }
        string ns = "";
        for(int i = 0; i < st.size(); i ++){
            ns += st[i];
        }
        return ns;
    }
};