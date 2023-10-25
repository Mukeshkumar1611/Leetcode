class Solution {
public:

    int helper(int idx1, int idx2, vector<vector<int>>&ans, vector<vector<int>>&dp)
    {
        if(idx1 == 0 and idx2 == 0) return 1;
        if(idx1 < 0 or idx2 < 0) return 0;
        if(dp[idx1][idx2] != -1) return dp[idx1][idx2];

        int left = helper(idx1-1, idx2, ans, dp);
        int right = helper(idx1, idx2-1, ans, dp);
        return dp[idx1][idx2] = left + right;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>>ans(m, vector<int>(n));
        vector<vector<int>>dp(m, vector<int>(n, -1));
        return helper(m-1, n-1, ans, dp);
    }
};
