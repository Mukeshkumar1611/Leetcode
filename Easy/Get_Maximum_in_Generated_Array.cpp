class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        vector<int>dp(n+1);

        dp[0] = 0;
        dp[1] = 1;
        int m = n;
        if(n % 2)
        {
            m = n/2 + 1;
        }
        else
        {
            m = n/2;
        }
        for(int i = 1; i < m; i++)
        {
            dp[2 * i] = dp[i];
            dp[(2 * i) + 1] = dp[i] + dp[i+1];
        }
        for(auto it : dp)
        {
            cout << it << ' ';
        }

        return *max_element(dp.begin(), dp.end());
    }
};
