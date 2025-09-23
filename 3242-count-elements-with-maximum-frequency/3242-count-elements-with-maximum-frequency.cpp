class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0 ;i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int max = 0,c = 0;
        map<int,int> ::iterator it;
        for(it = mp.begin();it != mp.end();it ++){
            if(it->second > max) max = it->second;
        }
        int sum = 0;
        for(it = mp.begin();it != mp.end();it ++){
            if(it->second == max) sum += it->second;
        }
        return sum;
    }
};