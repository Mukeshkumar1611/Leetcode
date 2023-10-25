class Solution {
private:
    int helper(int temp, int n, vector<vector<int>> &dp)
    {
        if(n == 0) return 0;
        if(temp > sqrt(n)) return 1e9;
        if(dp[temp][n] != -1) return dp[temp][n];

        int take = 1e9;
        if(n - (temp * temp) >= 0)
        {
            take = 1 + helper(temp, n - (temp * temp), dp);
        }

        int notTake = helper(temp + 1, n, dp);

        return dp[temp][n] = min(take, notTake);
    }

public:
    int numSquares(int n) {
        vector<vector<int>> dp(sqrt(n) + 1, vector<int>(n + 1, -1));
        return helper(1, n, dp); 
    }
};
