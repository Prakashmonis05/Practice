class Solution {
    public String reverseVowels(String s) {
        char[] arr = s.toCharArray();
        int left=0;
        int right=arr.length-1;

        while(left<right)
        {   
            char l=arr[left];
            char r=arr[right];
            if((l=='a' || l=='e'|| l=='i' || l=='o' || l=='u' || l=='A' || l=='E'|| l=='I' || l=='O' || l=='U' )&& (r=='a' || r=='e'|| r=='i' || r=='o' || r=='u' || r=='A' || r=='E'|| r=='I' || r=='O' || r=='U'))
            {
                char temp=arr[left];
                arr[left]=arr[right];
                arr[right]=temp;
                left++;
                right--;
            }
            else
            {
                if(l!='a' && l!='e' && l!='i' && l!='o' && l!='u' && l!='A' && l!='E' && l!='I' && l!='O' && l!='U' )
                {
                    left++;
                }
                if(r!='a' && r!='e'&& r!='i' && r!='o' && r!='u' && r!='A' && r!='E'&& r!='I' && r!='O' && r!='U')
                {
                    right--;
                }
            }
            

        }
        String result = new String(arr);
        return result;
    }
}