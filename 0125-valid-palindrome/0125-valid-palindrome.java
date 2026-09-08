class Solution {
    public boolean isPalindrome(String s) {
        s=s.toLowerCase();
        s = s.replaceAll("[^a-zA-Z0-9 ]", "");
        int n=s.length();
        String str="";
        for(int i=0;i<n;i++)
        {   
            if(s.charAt(i)!=' ')
            {
                str=str+s.charAt(i);
            }            
        }
        int len=str.length();
        int left=0;
        int right=len-1;
        System.out.print(str);
        while(left<right)
        {
            if(str.charAt(left)!=str.charAt(right))
            {
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }
}