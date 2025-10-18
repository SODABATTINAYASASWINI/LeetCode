class Solution {
    public int romanToInt(String s) {
        HashMap<Character, Integer> mp = new HashMap<>();
        mp.put('I', 1);
        mp.put('V', 5);
        mp.put('X', 10);
        mp.put('L', 50);
        mp.put('C', 100);
        mp.put('D', 500);
        mp.put('M', 1000);
    
    int sum = 0;
    int i = 0;
    while(i < s.length() - 1){
        if(s.charAt(i) == 'I' && s.charAt(i + 1) == 'V'){
            sum += 4;
            i += 2;
        }
        else if(s.charAt(i) == 'I' && s.charAt(i + 1) == 'X'){
            sum += 9;
            i += 2;
        }
        else if(s.charAt(i) == 'X' && s.charAt(i + 1) == 'L'){
            sum += 40;
            i += 2;
        }
        else if(s.charAt(i) == 'X' && s.charAt(i + 1) == 'C'){
            sum += 90;
            i += 2;
        }
        else if(s.charAt(i) == 'C' && s.charAt(i + 1) == 'D'){
            sum += 400;
            i += 2;
        }
        else if(s.charAt(i) == 'C' && s.charAt(i + 1) == 'M'){
            sum += 900;
            i += 2;
        }
        else{
            sum += mp.get(s.charAt(i));
            i += 1;
        }
    }
        if (i == s.length() - 1) {
            sum += mp.get(s.charAt(i));
        }

    return sum;
    }
}