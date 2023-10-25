class Solution
{
private:
    void dfs(int row, int col, vector<vector<char>> &board, vector<vector<int>> &visited, int *delrow, int *delcol)
    {
        int n = board.size();
        int m = board[0].size();
        visited[row][col] = 1;
        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and
                visited[nrow][ncol] == 0 and board[nrow][ncol] == 'O')
            {
                dfs(nrow, ncol, board, visited, delrow, delcol);
            }
        }
    }

public:
    void solve(vector<vector<char>> &board)
    {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        for (int i = 0; i < n; i++)
        {
            if (!visited[i][0] and board[i][0] == 'O')
            {
                dfs(i, 0, board, visited, delrow, delcol);
            }
            if (!visited[i][m - 1] and board[i][m - 1] == 'O')
            {
                dfs(i, m - 1, board, visited, delrow, delcol);
            }
        }

        for (int j = 0; j < m; j++)
        {
            if (!visited[0][j] and board[0][j] == 'O')
            {
                dfs(0, j, board, visited, delrow, delcol);
            }
            if (!visited[n - 1][j] and board[n - 1][j] == 'O')
            {
                dfs(n - 1, j, board, visited, delrow, delcol);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!visited[i][j] and board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
