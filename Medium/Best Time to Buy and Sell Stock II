class Solution {
public:
    int helper(int idx, vector<int> &prices, int n, int buy, vector<vector<int>> &dp)
    {
        if(idx == n) return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];

        int profit = 0;
        if(buy)
        {
            profit = max(-prices[idx] + helper(idx + 1, prices, n, 0, dp), 0 + helper(idx + 1, prices, n, 1, dp));
        }
        else{
            profit = max(prices[idx] + helper(idx + 1, prices, n, 1, dp), helper(idx + 1, prices, n, 0, dp));
        }
        return dp[idx][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(), vector<int>(2, -1));
        return helper(0, prices, prices.size(), 1, dp);
    }
};
