class Solution {
private:
    int mod = 1e9 + 7;
    long long int helper(long long int n, int x, int num, vector<vector<long long>> &dp)
    { 
        if(n == 0) return 1;
        if(num > 300 || num > n) return 0;
        if(n < 0) return 0;
        if(dp[n][num] != -1) return dp[n][num];
        
        
        long long int take = helper((long long)(n - pow(num, x)), x, num + 1, dp) % mod;
        long long int notTake = helper(n, x, num + 1, dp) % mod;
        
        return dp[n][num] = (take + notTake) % mod;
    }
    
public:
    int numberOfWays(int n, int x) 
    {
        vector<vector<long long>> dp(301, vector<long long>(301, -1));
        return helper(n, x, 1, dp)  % mod;
    }
};
