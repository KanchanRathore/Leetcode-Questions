class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int mod = 0;
        vector<bool>ans;
        for(int bit:nums)
        {
            mod = (mod*2+bit)%5;
            if(mod == 0)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};