class Solution {
private:
    int mod = 1e9 + 7;
    long long int helper(int currDay, int &n, int &delay, int &forget, vector<int> &dp)
    {
        if(dp[currDay] != -1) return dp[currDay];
        int yn = (currDay + forget) > n;
        long long int ans = yn;

        for(int day = currDay + delay; day < min(currDay + forget, n + 1); day++)
        {
            ans = ans + helper(day, n, delay, forget, dp);
        }
        return dp[currDay] = ans % mod;
    }

public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<int> dp(n + 1, -1);
        if(delay == forget) return 1;
        long long int ans = helper(1, n, delay, forget, dp) % mod;
        return ans;
    }
};
