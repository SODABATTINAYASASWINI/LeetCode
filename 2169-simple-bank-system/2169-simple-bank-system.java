class Bank {
    HashMap<Integer, Long> mp = new HashMap<>();
    public Bank(long[] balance) {  
        for(int i = 1;  i <= balance.length; i ++){
           mp.put(i, balance[i - 1]);
        }
    }
    
    public boolean transfer(int account1, int account2, long money) {
        if (!mp.containsKey(account1) || !mp.containsKey(account2)) return false;
        if(mp.get(account1) < money){
            // mp(account2) = mp.get(account2) + money;
            return false;
        }
        else {
            mp.put(account1, mp.get(account1) - money);
            mp.put(account2, mp.get(account2) + money);
            return true;
        }
    }
    
    public boolean deposit(int account, long money) {
        if(!mp.containsKey(account)) return false;
        long sum = mp.get(account);
        long newsum = money + sum;
        mp.put(account, newsum);
        return true;
    }
    
    public boolean withdraw(int account, long money) {
        if(!mp.containsKey(account)) return false;
        if(mp.get(account) >= money){
            mp.put(account, mp.get(account) - money);
            return true;
        }
        else{
            return false;
        }
    }
}

/**
 * Your Bank object will be instantiated and called as such:
 * Bank obj = new Bank(balance);
 * boolean param_1 = obj.transfer(account1,account2,money);
 * boolean param_2 = obj.deposit(account,money);
 * boolean param_3 = obj.withdraw(account,money);
 */