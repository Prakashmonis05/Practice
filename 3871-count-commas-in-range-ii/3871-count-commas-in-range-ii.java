class Solution {
    public long countCommas(long n) {
        long count = 0;
        long num=999;
        if (n < 1000) {
            return 0;
        }
        if (n >=num ) {
            count += n - num;
        }
        num=999999l;
        if (n >= num) {
            count += n -num ;
        }
        num=999999999l;
        if (n >=num ) {
            count += n -num ;
        }
        num=999999999999l;
        if (n >= num) {
            count += n - num;
        }
        num=999999999999999l;
        if (n >num ) {
            count += n - num;
        }
        return count;
    }
}