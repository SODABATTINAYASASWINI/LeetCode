class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        long long sum = 0;
        int c = 0;
        int ans = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            c += 1;
            if(c == k){
                c -= 1;
                long long avg = sum / k;
                if(avg >= threshold) ans += 1;
                sum -= arr[i-k+1];
            }
        }
        return ans;
    }
};