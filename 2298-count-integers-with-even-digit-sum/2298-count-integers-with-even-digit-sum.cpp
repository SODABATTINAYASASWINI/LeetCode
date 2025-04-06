class Solution {
public:
    bool check(int n){
        int s = 0;
        while(n != 0){
            s += n % 10;
            n = n / 10;
        }
        cout << s << " ";
        if(s % 2 == 0) return true;
        else return false;
    }
    int countEven(int num) {
        int sum = 0;
        for(int i = 1; i <= num;  i ++){
            if(check(i)){
                sum += 1;
            }
        }
        return sum;
    }
};