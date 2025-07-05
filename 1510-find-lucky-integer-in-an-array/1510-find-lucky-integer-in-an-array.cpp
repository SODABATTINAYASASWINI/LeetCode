class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]] += 1;
        }
        map<int,int> :: iterator it;
        int maxi = -1;
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->second == it->first){
                if(it->second > maxi) maxi = it->second;
            }
        }
        return maxi;
    }
};