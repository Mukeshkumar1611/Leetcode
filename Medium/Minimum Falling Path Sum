class Solution {
public:

    // int helper(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>&dp)
    // {
    //     if(j < 0 or j >= matrix[0].size()) return 1e8;
    //     if(i == 0) return matrix[0][j];
    //     if(dp[i][j] != -1) return dp[i][j];

    //     int up = matrix[i][j] + helper(i-1, j, matrix, dp);
    //     int upLeft = matrix[i][j] + helper(i-1, j - 1, matrix, dp);
    //     int upRight = matrix[i][j] + helper(i-1, j + 1, matrix, dp);

    //     return dp[i][j] = min(up, min(upLeft, upRight)); 
    // }

    // int minFallingPathSum(vector<vector<int>>& matrix) {

    //     int m = matrix.size();
    //     int n = matrix[0].size();
    //     vector<vector<int>>dp(m, vector<int>(n, -1));

    //     int mini = 1e8;
    //     for(int i = 0; i < n; i++)
    //     {
    //         mini = min(mini, helper(m-1, i, matrix, dp));
    //     }
    //     return mini;
    // }

    
    int minFallingPathSum(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>>dp(m, vector<int>(n, 0));

        int mini = 1e8;
        for(int i = 0; i < n; i++)
        {
            dp[0][i] = matrix[0][i];
        }

        for(int i = 1; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int up = matrix[i][j] + dp[i-1][j];
                int upLeft = 1e8;
                if(j-1 >= 0) upLeft = matrix[i][j] + dp[i-1][j-1];
                int upRight = 1e8;
                if(j+1 < n) upRight = matrix[i][j] + dp[i-1][j+1];
                dp[i][j] = min(up, min(upLeft, upRight));
            }
        }
        int minim = 1e8;
        for(int j = 0; j < n; j++)
        {
            minim = min(minim, dp[m-1][j]);
        }
        return minim;
    }
};
