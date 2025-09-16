class Solution {
    int check(String s, String bl) {
        for (int j = 0; j < s.length(); j++) {
            if (bl.indexOf(s.charAt(j)) != -1) { 
                return 1;
            }
        }
        return 0;
    }
    public int canBeTypedWords(String text, String brokenLetters) {
        ArrayList<String>arr = new ArrayList<>();
        String s = "";
        for(int i = 0; i < text.length(); i++){
            if(text.charAt(i) == ' '){ 
                arr.add(s);
                s = "";
            }
            else{
                s += text.charAt(i);
            }
        }
        arr.add(s);
        int c = 0;
        for(String i : arr){
            if(check(i, brokenLetters) == 0){
                c += 1;
            }
        }
        return c;
    }
}