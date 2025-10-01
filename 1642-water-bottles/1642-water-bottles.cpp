class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int full  = numBottles;
        int empty = numBottles;
        int sum = numBottles;
        int t = 0;
        while(1){
            if(empty < numExchange) break;
            full = empty / numExchange;
            cout << full << " ";
            t = empty;
            empty = t % numExchange + full;
            sum += full;
        }
        return sum;
    }
};