class Solution {
public:
    vector<int> sumZero(int n) {
        int temp = 0;
        int sum = 0;
        vector<int>v;
       for(int i = 0; i < n -1 ; i++){
            temp += 1;
            v.push_back(temp);
            sum += temp;
       }
       v.push_back(-sum);
       return v;
    }
};