class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>sa;
        int maxlength = 0;
        int left =0;
        for(int right =0; right<=s.length()-1; right++)
        {
            while(sa.count(s[right]))
            {
                 sa.erase(s[left]);
                 left++;
            }
            sa.insert(s[right]);
            maxlength = max(maxlength, right-left+1);
        }
        return maxlength;
    }
};