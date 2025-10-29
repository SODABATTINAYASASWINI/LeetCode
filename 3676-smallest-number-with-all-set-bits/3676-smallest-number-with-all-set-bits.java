class Solution {
    boolean setBits(int n){
        int nc = 0, c = 0;
        while(n != 0){
            if((n & 1) == 1){
                c += 1;
            }
            nc += 1;
            n = n >> 1;
        }
        if(nc == c) return true;
        return false;
    }
    public int smallestNumber(int n) {

        while(true){
            if(setBits(n) == true){
                return n;
            }
            n += 1;
        }
    }
}