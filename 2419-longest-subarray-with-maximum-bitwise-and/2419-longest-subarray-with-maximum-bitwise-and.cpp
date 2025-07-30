class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        auto a = max_element(nums.begin(),nums.end());
        int m = *a;
        int count = 0;
        for(auto h : nums)
        {
            if (h == m)
            {
                count++;
            }
        }
        return count;
    }
};