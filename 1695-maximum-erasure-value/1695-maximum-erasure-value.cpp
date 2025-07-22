class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>m;
        int count=0;
        for(auto k: nums)
        {
           m[k]++;
        }
        for(auto k:m)
        {
            count = count + k.first;
        }
        return count;
    }
};