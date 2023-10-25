class Solution {
public:

    long helper(int idx, vector<int>&denominations, int value, vector<vector<int>>&dp)

{
    if(idx == 0) return (value % denominations[0] == 0);
    if(dp[idx][value] != -1) return dp[idx][value];
    
    int notTake = helper(idx-1, denominations, value, dp);
    int take = 0;
    if(denominations[idx] <= value)
    {
        take = helper(idx, denominations, value-denominations[idx], dp);
    }

    return dp[idx][value] = take + notTake;
}

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        return helper(n-1, coins, amount, dp);
    }
};
