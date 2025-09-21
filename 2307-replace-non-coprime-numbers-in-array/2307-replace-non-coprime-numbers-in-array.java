class Solution {
    int gcd(int a, int b){
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int lcm(int a, int b) {
        return (int) (a / gcd((int)a, (int)b)) * b;  
    }

    public List<Integer> replaceNonCoprimes(int[] nums) {
        Stack<Integer>st = new Stack<>();
        for(int num : nums){
            st.push(num);
            while(st.size() > 1){
                int a = st.pop();
                int b = st.pop();
                int g = gcd(a,b);
                if(g > 1){
                    st.push(lcm(a,b));
                }
                else{
                    st.push(b);
                    st.push(a);
                    break;
                }
            }
        }
         return new ArrayList<>(st);
    }
}