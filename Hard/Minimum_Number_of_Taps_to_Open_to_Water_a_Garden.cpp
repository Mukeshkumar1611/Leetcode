class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int> dp(n + 1, 1e9);

        dp[0] = 0;

        for(int i = 0; i <= n; i++)
        {
            int start = max(0, i - ranges[i]);
            int end = min(n, i + ranges[i]);

            for(int j = start; j <= end; j++)
            {
                dp[end] = min(dp[end], dp[j] + 1);
            }
        }
        if(dp[n] >= 1e9) return -1;
        return dp[n];
    }
};
