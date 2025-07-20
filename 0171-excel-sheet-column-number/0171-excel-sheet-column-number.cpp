class Solution {
public:
    int titleToNumber(string columnTitle) {
        long int z = 0;
        int base = 1;
        reverse(columnTitle.begin(), columnTitle.end());
        for(auto c: columnTitle)
        {
             z += (int(c)-64)*base;
             base = base*26;
        }
        return z;
    }
};