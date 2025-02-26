class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();
        
        int store = 0;
        for(int i = 0; i<=m-1; i++)
        {
                 sort(nums[i].begin(), nums[i].end());
        }
        for(int i = 0; i<=n-1; i++)
        {
            int mx = 0;
            for(int j = 0; j<=m-1; j++)
            {
                  mx = max(mx, nums[j][i]);
            }
            store = store + mx;
        }
        return store;

        
    }
};