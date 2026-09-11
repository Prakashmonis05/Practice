class Solution {
    public int totalNumbers(int[] digits) {
        Set<Integer> set = new HashSet<>();
        int n = digits.length;
        int result;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (i != j && j != k && k != i) {
                        result = digits[i] * 100 + digits[j] * 10 + digits[k];
                        if (digits[i]!=0 && result % 2 == 0) {
                            set.add(result);
                        }
                    }

                }
            }
        }
        return set.size();
    }
}