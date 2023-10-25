class Solution
{
private:
    int helper(int i, int j, vector<int> &nums1, vector<int> &nums2, vector<vector<int>> &dp)
    {
        if (i <= 0 || j <= 0)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        if (nums1[i - 1] == nums2[j - 1])
            return dp[i][j] = 1 + helper(i - 1, j - 1, nums1, nums2, dp);
        return dp[i][j] = max(helper(i - 1, j, nums1, nums2, dp), helper(i, j - 1, nums1, nums2, dp));
    }

public:
    int maxUncrossedLines(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, -1));
        int ans = helper(n1, n2, nums1, nums2, dp);
        return ans;
    }
};
