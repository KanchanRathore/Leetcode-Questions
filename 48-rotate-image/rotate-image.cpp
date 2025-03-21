class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rsize = matrix.size();
        for(int i =0;i<=rsize-1;i++)
        {
            for(int j = 0; j<=i;j++)
            {
               swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i =0; i<=rsize-1;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};