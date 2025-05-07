class Solution {
public:
    string reverseVowels(string s) {
        int start = 0, end = s.length() - 1;
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        
        while (start < end) {
            while (start < end && vowels.find(s[start]) == vowels.end()) {
                start++;
            }
            while (start < end && vowels.find(s[end]) == vowels.end()) {
                end--;
            }
            if (start < end) {
                swap(s[start++], s[end--]);
            }
        }
        return s;
    }
};
