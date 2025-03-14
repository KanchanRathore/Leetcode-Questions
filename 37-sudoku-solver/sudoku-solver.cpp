class Solution {
    typedef vector<vector<char>> Board;

bool isValid(Board &board, int row, int col, char num) {
    // Check row and column
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == num || board[i][col] == num) 
            return false;
    }
    // Check 3x3 sub-box
    int boxRow = (row / 3) * 3, boxCol = (col / 3) * 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[boxRow + i][boxCol + j] == num) 
                return false;
        }
    }
    return true;
}

bool solve(Board &board) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == '.') {
                for (char num = '1'; num <= '9'; num++) {
                    if (isValid(board, i, j, num)) {
                        board[i][j] = num;
                        if (solve(board)) return true;
                        board[i][j] = '.'; // Backtrack
                    }
                }
                return false;
            }
        }
    }
    return true;
}
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};