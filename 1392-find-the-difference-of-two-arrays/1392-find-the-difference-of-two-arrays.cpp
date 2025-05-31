class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1;
        for(int i = 0; i < nums1.size(); i++){
            mp1[nums1[i]] ++;
        }
        map<int,int>mp2;
        for(int i = 0; i < nums2.size(); i++){
            mp2[nums2[i]] ++;
        }
        vector<vector<int>>ans;
        vector<int>v1;
        vector<int>v2;
        map<int,int> :: iterator it1;
        for(it1 = mp1.begin(); it1 != mp1.end(); it1++){
            if(mp2.find(it1->first) == mp2.end()) v1.push_back(it1->first);
        }
        map<int,int> :: iterator it2;
        for(it2 = mp2.begin(); it2 != mp2.end(); it2++){
            if(mp1.find(it2->first) == mp1.end()) v2.push_back(it2->first);
        }
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};