class Solution {
public:

    // int helper(int idx1, int idx2, string s1, string s2, vector<vector<int>> &dp)
    // {
    //     if(idx1 < 0 or idx2 < 0) return 0;
    //     if(dp[idx1][idx2] != -1) return dp[idx1][idx2];
        
        // if(s1[idx1] == s2[idx2]) return 1 + helper(idx1 - 1, idx2 - 1, s1, s2, dp);
        
        // return dp[idx1][idx2] =  max(helper(idx1 - 1, idx2, s1, s2, dp), helper(idx1, idx2 - 1, s1, s2, dp));
    // }

    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for(int i = 0; i <= n; i++) dp[i][0] = 0;
        for(int i = 0; i <= m; i++) dp[0][i] = 0;

        for(int idx1 = 1; idx1 <= n; idx1++)
        {
            for(int idx2 = 1; idx2 <= m; idx2++)
            {
                if(s1[idx1-1] == s2[idx2-1]) dp[idx1][idx2] =  1 + dp[idx1 - 1][idx2 - 1];
                    
                else dp[idx1][idx2] =  max(dp[idx1 - 1][idx2], dp[idx1][idx2-1]);
            }
        }
        return dp[n][m];
    }
};
