class Solution {
    public boolean count(int a, int b, int c){
        if(a*a + b*b == c*c){
            return true;
        }
        else return false;
    }
    public int countTriples(int n) {
        int c = 0;
      for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <=n ; k++){
                if(count(i,j,k)){
                    c += 1;
                }
            }
        }
      }
      return c;
    }
}