class Solution
{
private:
    long long helper(int idx, int prev, int n, int x, vector<int> &nums, vector<vector<long long>> &dp)
    {
        if (idx >= n)
            return 0;
        if(dp[idx][prev] != -1)
            return dp[idx][prev];
        long long int take = 0;
        long long int notTake = 0;

        notTake = 0 + helper(idx+1, prev, n, x, nums, dp);

        if (nums[idx] % 2 == prev)
        {
            take = nums[idx] + helper(idx + 1, prev, n, x, nums, dp);
        }
        else
        {
            take = nums[idx] - x + helper(idx + 1, nums[idx] % 2, n, x, nums, dp);
        }
        return dp[idx][prev] = max(take, notTake);
    }

public:
    long long maxScore(vector<int> &nums, int x)
    {
        int n = nums.size();
        vector<vector<long long>>dp(n+1, vector<long long>(2, -1));
        return nums[0] + helper(1, nums[0]%2, n, x, nums, dp);
    }
};
