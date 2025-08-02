class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1;
        int maxcount = 1;
        if(nums.empty())
        {
             return 0;
        }
        for(int i =1; i<=nums.size()-1; i++)
        {
             if(nums[i] == nums[i-1])
             {
                continue;
             }
             else if(nums[i]-nums[i-1] == 1)
             {
                 count++;
             }
             else
             {
                count = 1;
             }
              maxcount = max(maxcount,count);
        }
        return maxcount;
    }
};