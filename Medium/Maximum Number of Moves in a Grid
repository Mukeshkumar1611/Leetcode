class Solution {
private:
    int helper(int row, int col, vector<vector<int>>&grid, vector<vector<int>> &dp)
    {
        if(row < 0 or col < 0 or row >= grid.size() or col >= grid[0].size())
        {
            return 0;
        }
        if(dp[row][col] != -1) return dp[row][col];
        int maxi = 0;
        if(row + 1 < grid.size() && col + 1 < grid[0].size())
        {
            if(grid[row + 1][col + 1] > grid[row][col])
            {
                maxi = max(maxi, 1 + helper(row + 1, col + 1, grid, dp));
            }
        }
        if(row - 1 >=0 && col + 1 < grid[0].size())
        {
            if(grid[row - 1][col + 1] > grid[row][col])
            {
                maxi = max(maxi, 1 + helper(row - 1, col + 1, grid, dp));
            }
        }
        if(col + 1 < grid[0].size())
        {
            if(grid[row][col + 1] > grid[row][col])
            {
                maxi = max(maxi, 1 + helper(row, col + 1, grid, dp));
            }
        }
        return  dp[row][col] = maxi;
    }

public:
    int maxMoves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxi = 0;
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        for(int i = 0; i < n; i++)
        {
            maxi = max(maxi, helper(i, 0, grid, dp));
        }
        return maxi;
    }
};
