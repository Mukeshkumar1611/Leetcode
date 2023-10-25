class Solution
{
public:
    int helper(int idx, vector<int> &prices, int fee, int buy, vector<vector<int>> &dp)
    {
        if (idx == prices.size())
            return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];
        if (buy)
        {
            return dp[idx][buy] = max(-prices[idx] - fee + helper(idx + 1, prices, fee, 0, dp), 0 + helper(idx + 1, prices, fee, 1, dp));
        }
        return dp[idx][buy] = max(prices[idx] + helper(idx + 1, prices, fee, 1, dp), 0 + helper(idx + 1, prices, fee, 0, dp));
    }

    int maxProfit(vector<int> &prices, int fee)
    {
        vector<vector<int>> dp(prices.size(), vector<int>(2, -1));
        return helper(0, prices, fee, 1, dp);
    }
};
