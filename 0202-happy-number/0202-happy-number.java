class Solution {
    public boolean isHappy(int n) {
        HashSet<Integer> set = new HashSet<>();
        return solve(n, set);
    }

    private boolean solve(int n, HashSet<Integer> set) 
    {
        int res=0;
        if(n==1)
        {
            return true;
        }
        while(n>0)
        {
            int num=n%10;
            res+=num*num;
            n=n/10;
        }
        if(set.contains(res))
        {
            return false;
        }
        set.add(res);
        return solve(res, set);
    }
}