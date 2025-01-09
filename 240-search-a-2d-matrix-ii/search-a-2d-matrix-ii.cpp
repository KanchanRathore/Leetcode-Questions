class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowindex = 0;
        int colindex = col-1;

        while(rowindex < row && colindex >=0 )
        {
            if(target == matrix[rowindex][colindex])
            {
                return 1;
            }
            if(target < matrix[rowindex][colindex])
            {
                colindex--;
            }
            else
            {
                rowindex++;
            }
        }
        return 0;
    }
};