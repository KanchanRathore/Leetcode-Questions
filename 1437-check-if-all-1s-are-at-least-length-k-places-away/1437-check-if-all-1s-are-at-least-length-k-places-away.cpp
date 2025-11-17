class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev = 0;
        for(int i =1; i<=nums.size()-1; i++)
        {
            if(nums[i] == 1)
            {
                int index = i;
                if(index-prev-1 >= k)
                {
                    prev = i;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};