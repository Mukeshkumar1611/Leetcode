class Solution
{
private:
    int helper(int idx, vector<int> &nums1, vector<int> &nums2, int last, vector<vector<int>> &dp)
    {
        if (idx >= nums1.size())
        {
            return 0;
        }
        if (dp[idx][last] != -1)
        {
            return dp[idx][last];
        }
        int ans = 0;
        if (last == 2)
        {
            ans = max(ans, 1 + helper(idx + 1, nums1, nums2, 0, dp)); // chosen from nums1
            ans = max(ans, 1 + helper(idx + 1, nums1, nums2, 1, dp)); // chosen from nums2
            ans = max(ans, helper(idx + 1, nums1, nums2, 2, dp));    // starting again from 0
        }
        else
        {
            int val;
            if (last == 0)
            {
                val = nums1[idx - 1];
            }
            else
            {
                val = nums2[idx - 1];
            }
            if (nums1[idx] >= val)
            {
                ans = max(ans, 1 + helper(idx + 1, nums1, nums2, 0, dp));
            }
            if (nums2[idx] >= val)
            {
                ans = max(ans, 1 + helper(idx + 1, nums1, nums2, 1, dp));
            }
        }
        return dp[idx][last] = ans;
    }

public:
    int maxNonDecreasingLength(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        vector<vector<int>> dp(n + 1, vector<int>(3, -1));
        return helper(0, nums1, nums2, 2, dp);
    }
};
