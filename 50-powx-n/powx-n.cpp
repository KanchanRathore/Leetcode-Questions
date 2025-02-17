class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;  // Base case: x^0 = 1
        
        long long N = n;  // Convert to long long to avoid overflow
        if (N < 0) {
            x = 1 / x;  // Invert base
            N = -N;     // Make exponent positive
        }

        double half = myPow(x, N / 2);

        if (N % 2 == 0) return half * half;   // Even exponent
        else return half * half * x;          // Odd exponent
    }
};
