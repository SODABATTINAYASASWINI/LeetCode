class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        map<int,vector<int>>::iterator it;
        for(it = mp.begin(); it != mp.end(); it++){
            for(int i = 0; i < it->second.size() - 1; i++){
                if(abs(it->second[i] - it->second[i + 1]) <= k) return true;
            }
        }
        return false;
    }
};