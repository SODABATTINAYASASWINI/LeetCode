class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>v(n , 0);
        stack<int>st;
        for(int i = 0; i < n; i++){
            while(!st.empty() and temperatures[i] > temperatures[st.top()]){
                int prev = st.top();
                st.pop();
                v[prev] = i - prev;
            }
            st.push(i);
        }
        return v;
    }
};