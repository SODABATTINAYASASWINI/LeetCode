class Solution {
    boolean check(int num){
        while(num != 0){
            if(num % 10 == 0) return false;
            num = num / 10;
        }
        return true;
    }
    public int[] getNoZeroIntegers(int n) {
        for(int a = 1; a < n; a ++){
            int b = n - a;
            if(check(a) && check(b)) return new int[]{a,b};
        }
        return new int[]{};
    }
}