class Solution
{
public:
    int helper(int idx, int buy, int n, vector<int> &prices, vector<vector<int>> &dp)
    {
        if (idx >= n)
            return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];
        
        if (buy)
        {
            return dp[idx][buy] = max(-prices[idx] + helper(idx + 1, 0, n, prices, dp), 0 + helper(idx + 1, 1, n, prices, dp));
        }
        else
        {
            return dp[idx][buy] = max(prices[idx] + helper(idx + 2, 1, n, prices, dp), 0 + helper(idx + 1, 0, n, prices, dp));
        }
    }

    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        return helper(0, 1, n, prices, dp);
    }
};
