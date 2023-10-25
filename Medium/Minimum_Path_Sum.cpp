class Solution
{
public:
    long long helper(int idx1, int idx2, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if (idx1 == 0 and idx2 == 0)
            return grid[idx1][idx2];
        if (idx1 < 0 or idx2 < 0)
            return INT_MAX;
        if (dp[idx1][idx2] != -1)
            return dp[idx1][idx2];
        long long left = grid[idx1][idx2] + helper(idx1 - 1, idx2, grid, dp);
        long long right = grid[idx1][idx2] + helper(idx1, idx2 - 1, grid, dp);
        return dp[idx1][idx2] = min(left, right);
    }

    int minPathSum(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 and j == 0)
                    dp[i][j] = grid[i][j];
                else
                {
                    int left = grid[i][j];
                    if (i > 0)
                    {
                        left = left + dp[i - 1][j];
                    }
                    else
                    {
                        left = left + 1e9;
                    }
                    int right = grid[i][j];
                    if (j > 0)
                    {
                        right = right + dp[i][j - 1];
                    }
                    else
                    {
                        right = right + 1e9;
                    }
                    dp[i][j] = min(left, right);
                }
            }
        }
        return dp[m - 1][n - 1];
    }
};
