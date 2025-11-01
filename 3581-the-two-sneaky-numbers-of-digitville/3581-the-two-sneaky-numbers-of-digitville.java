class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            if(mp.containsKey(nums[i])){
                mp.put(nums[i],mp.get(nums[i]) + 1);
            }
            else{
                mp.put(nums[i], 1);
            }
        }
        ArrayList<Integer> arr = new ArrayList<>();
        // for(Map.Entry<Integer, Integer> it )
        mp.forEach((key, value) -> {
            if(mp.get(key) >= 2){
                arr.add(key);
            }
        });

        int[] ans = new int[arr.size()];
        for(int i = 0; i < arr.size(); i++){
            ans[i] = arr.get(i);
        }
        return ans;
    }
}