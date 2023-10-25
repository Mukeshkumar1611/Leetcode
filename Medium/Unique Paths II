class Solution
{
public:
    int helper(int idx1, int idx2, vector<vector<int>> &obstacleGrid, vector<vector<int>>& dp)
    {

        if (idx1 == 0 and idx2 == 0 and obstacleGrid[idx1][idx2] != 1)
            return 1;
        if (idx1 < 0 or idx2 < 0 or obstacleGrid[idx1][idx2] == 1)
            return 0;
        if(dp[idx1][idx2] != -1) return dp[idx1][idx2];

        int left = helper(idx1 - 1, idx2, obstacleGrid, dp);
        int right = helper(idx1, idx2 - 1, obstacleGrid, dp);

        return dp[idx1][idx2] = left + right;
    }

    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(m - 1, n - 1, obstacleGrid, dp);
    }
};
