class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0, j = 0;
        stack<int>st;
        while(1){
            if((i >= pushed.size() and j >= popped.size() and st.size() == 0)){
                    break;
            }
            if(!st.empty() and (st.top() == popped[j])){
                st.pop();
                j += 1;
            }
            else if(i < pushed.size() and (pushed[i] != popped[j])){
                st.push(pushed[i]);
                i += 1;
            }
            else if(i < pushed.size() and (pushed[i] == popped[j])){
                i += 1;
                j += 1;
            }
            else{
                break;
            }
        }
        if(st.size() == 0) return true;
        else return false;
    }
};