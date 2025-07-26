class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>s;
        for(int i = 0; i<=nums.size()-1; i++)
        {
            if(nums[i] <= 1)
            {
                for(int j = i+1; j<= nums.size()-1; j++)
                {
                    int sum = nums[j]+nums[i];
                    if(sum <= 1)
                    {
                        for(int k = j+1; k<=nums.size()-1; k++)
                        {
                            if(sum + nums[k] == 0)
                            {
                                s.push_back({nums[i], nums[j], nums[k]});
                            }
                        }
                    }
                }
            }
        }
        return s;
    }
    
};