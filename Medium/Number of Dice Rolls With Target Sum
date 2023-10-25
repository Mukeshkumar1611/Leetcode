class Solution {
private:
    int mod = 1e9 + 7;
    long long helper(int n, int k, int target, vector<vector<long long>> &dp)
    {
        if(n == 0 && target == 0) return 1;
        if(n <= 0) return 0;
        if(dp[n][target] != -1) return dp[n][target];

        long long ans = 0;
        for(int i = 1; i <= min(k, target); i++)
        {
            ans += (helper(n - 1, k, target - i, dp) % mod);
        }
        return dp[n][target] = (ans % mod);
    }

public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<long long>> dp(n + 1, vector<long long>(target + 1, -1));
        long long ans = helper(n, k, target, dp) % mod;
        return ans;
    }
};
