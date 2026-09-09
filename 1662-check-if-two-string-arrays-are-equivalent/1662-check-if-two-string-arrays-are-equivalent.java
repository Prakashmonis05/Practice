class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        String word3="";
        String word4="";
        for(int i=0;i<word1.length;i++)
        {
            word3=word3+word1[i];
        }
        for(int i=0;i<word2.length;i++)
        {
            word4=word4+word2[i];
        }
        System.out.println(word3);
        System.out.print(word4);
        if(word3.equals(word4))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}