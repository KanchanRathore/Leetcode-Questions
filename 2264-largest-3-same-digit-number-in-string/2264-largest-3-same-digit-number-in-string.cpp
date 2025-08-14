class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        int max = -1;
        for (int i = 0; i <= num.length() - 3; i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                int val = num[i] - '0';
                if (val > max) {
                    max = val;
                    ans = num.substr(i, 3);
                }
            }
        }

        return ans;
    }
};