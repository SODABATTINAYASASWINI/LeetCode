class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        stack<int>st;
        for(int i = 0; i < nums1.size(); i++){
            st.push(nums1[i]);
        }
        map<int,int>mp;
        for(int i = 0; i < nums2.size(); i++){
            mp[nums2[i]] = i;
        }
        while(!st.empty()){
            int s = mp[st.top()];
            int c = 0;
            for(int i = s; i < nums2.size(); i++){
                if(nums2[i] > st.top()){
                    c = 1;
                    v.push_back(nums2[i]);
                    break;
                }
            }
            if(c == 0){
                v.push_back(-1);
            }
            st.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};