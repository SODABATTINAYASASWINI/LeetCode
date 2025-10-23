class Solution {
    public boolean hasSameDigits(String s) {
        while(s.length() != 2){
            String u = "";
            for(int i = 0; i < s.length() - 1; i++){
                u += ((s.charAt(i) - '0') + (s.charAt(i + 1) - '0')) % 10;
            }
            s = u;
        }
        if(s.charAt(0) == s.charAt(1)) return true;
        else return false;
    }
}