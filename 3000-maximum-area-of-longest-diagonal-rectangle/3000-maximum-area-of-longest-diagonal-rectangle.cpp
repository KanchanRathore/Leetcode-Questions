class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int count =1;
        int max = -1;
        for(auto i:dimensions)
        {
            for(auto j: i)
            {
               count = count*j; 
            }
            if(count>max)
            {
                max = count;
            }
            count = 1;
        }
        return max;
    }
};