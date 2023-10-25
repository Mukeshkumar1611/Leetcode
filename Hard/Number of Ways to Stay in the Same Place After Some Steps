class Solution {
private:
    int mod = 1e9 + 7;
    long long int helper(int currIdx, int steps, int arrLength, vector<vector<int>> &dp)
    {
        if(steps == 0 && currIdx == 0) return 1;
        if(steps < 0 || currIdx < 0 || currIdx >= arrLength) return 0;
        if(dp[currIdx][steps] != -1) return dp[currIdx][steps];

        long long  int op1 = helper(currIdx + 1, steps - 1, arrLength, dp) % mod;
        long long int op2 = helper(currIdx - 1, steps - 1, arrLength, dp) % mod;
        long long int op3 = helper(currIdx, steps - 1, arrLength, dp) % mod;

        return dp[currIdx][steps] = (op1 + op2 + op3) % mod;
    }

public:
    int numWays(int steps, int arrLen) {
        vector<vector<int>> dp(steps + 1, vector<int>(steps + 1, -1));
        long long int ans = helper(0, steps, arrLen, dp) % mod;
        return ans;
    }
};
