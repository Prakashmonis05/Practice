class Solution {
    public int buyChoco(int[] prices, int money) {
        int n=prices.length;
        int leftover=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {   
                int sum=prices[i]+prices[j];
                int left=money-sum;
                if(leftover<left)
                {
                    leftover=left;
                }
            }
        }
        if(leftover>=0){
            return leftover;
        }
        return money;
    }
}