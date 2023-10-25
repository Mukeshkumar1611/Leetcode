class Solution
{
private:
    long long int helper(int i, int j, string &s1, string &s2, vector<vector<int>> &dp)
    {
        if (i < 0 and j < 0)
            return 0;
        if (i < 0)
        {
            int ans = 0;
            for (int k = 0; k <= j; k++)
            {
                ans += (int)s2[k];
            }
            return ans;
        }
        if (j < 0)
        {
            int ans = 0;
            for (int k = 0; k <= i; k++)
            {
                ans += (int)s1[k];
            }
            return ans;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        long long ans = INT_MAX;
        if (s1[i] == s2[j])
        {
            ans = helper(i - 1, j - 1, s1, s2, dp);
        }
        else
        {
            ans = min(ans, (s1[i] + helper(i - 1, j, s1, s2, dp)));
            ans = min(ans, s2[j] + helper(i, j - 1, s1, s2, dp));
        }
        return dp[i][j] = ans;
    }

public:
    int minimumDeleteSum(string s1, string s2)
    {
        vector<vector<int>> dp(s1.size(), vector<int>(s2.size(), -1));
        return helper(s1.size() - 1, s2.size() - 1, s1, s2, dp);
    }
};
