class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int count = 0;
        int min = INT_MAX;
        for(auto v: triangle)
        {
           auto m =  *min_element(v.begin(),v.end());
           count = count+m;
        }
        return count;
    }
};