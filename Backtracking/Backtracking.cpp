// N Queens (Number of solutions) using backtracking
class Solution {
public:
    bool isNotUnderAttack(vector<vector<int>>& board, int row, int col, int n)
    {
        int r, c;
        
        // loop along col
        for(c=0; c<col;c++)
        {
            if(board[row][c] == 1)
                return false;
        }
        // loop along the first diagonal
        for(r=row, c=col; r<n && c>=0; r++, c--)
        {
            if(board[r][c] == 1)
                return false;
        }
        // loop along the second diagonal
        for(r=row, c=col; r>=0 && c>=0; r--, c--)
        {
            if(board[r][c] == 1)
                return false;
        }
        return true;
    }
    
    int backtrackNQueen(vector<vector<int>>& board, int col, int n, int count)
    {
        if(col == n)
        {
            count++;
            return count;
        }
        
        for(int i=0; i<n; i++)
        {
            if (isNotUnderAttack(board, i, col, n))
            {  
                //place queen
                board[i][col] = 1;
                count = backtrackNQueen(board, col+1, n, count);
            }
            // remove queen(backtrack)
            board[i][col] = 0;
        }
        return count;
    }
    
    int totalNQueens(int n) {
        vector<vector<int>> board(n, (vector<int>(n, 0)));  
        
        return backtrackNQueen(board, 0, n, 0);
    }
};