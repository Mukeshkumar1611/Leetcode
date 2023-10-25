class Solution
{
private:
     int ab = 1e9 + 7;
    int helper(int i, int j, int n, int m, int maxMove, vector<vector<vector<long long>>> &dp)
    {
        if (i >= n or j >= m or i < 0 or j < 0)
            return 1;
        if (maxMove <= 0)
            return 0;
        if (dp[maxMove][i][j] != -1)
            return dp[maxMove][i][j];
        long long int left = helper(i - 1, j, n, m, maxMove - 1, dp) % ab;
        long long int right = helper(i + 1, j, n, m, maxMove - 1, dp) % ab;
        long long int up = helper(i, j - 1, n, m, maxMove - 1, dp) % ab;
        long long int down = helper(i, j + 1, n, m, maxMove - 1, dp) % ab;

        return dp[maxMove][i][j] = (left + right + up + down) % ab;
    }

public:
    int findPaths(int n, int m, int maxMove, int startRow, int startColumn)
    {
        vector<vector<vector<long long>>> dp(maxMove + 1, vector<vector<long long>>(n + 1, vector<long long>(m + 1, -1)));
        long long int ans = helper(startRow, startColumn, n, m, maxMove, dp);
        int ab = 1e9 + 7;
        return ans % ab;
    }
};
