class Solution {
public:
    bool check(string s){
        int n = s.size();
        int f = 0;
        int se = 0;
        int q = n / 2;
        for(int i = 0; i < q; i ++){
            f += s[i];
        }
        for(int i = q; i < n; i ++){
            se += s[i];
        }

        if(f == se) return true;
        else return false;
    }
    int countSymmetricIntegers(int low, int high) {
        int c = 0;
        for(int i = low; i <= high; i++){
            // if(i % 2 == 0){
                string s = to_string(i);
                cout << s << " " ;
                if(check(s)) c ++;
            // }
        }
        return c;
    }
};