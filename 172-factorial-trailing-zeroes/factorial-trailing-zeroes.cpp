
  class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while (n >= 5) {
            n /= 5;      // Divide by 5
            count += n;  // Add the result to the count
        }
        return count;
    }
};
