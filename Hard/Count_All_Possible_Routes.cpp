class Solution
{
private:
    int ab = 1e9 + 7;
    long long int helper(int start, int end, vector<int> &nums, int fuel, vector<vector<int>> &dp)
    {
        if (fuel < 0)
            return 0;
        if (dp[start][fuel] != -1)
            return dp[start][fuel];
        long long int ans = start == end ? 1 : 0;

        for (int idx = 0; idx < nums.size(); idx++)
        {
            if (start != idx)
            {
                ans = 
                ans + helper(idx, end, nums, fuel - abs(nums[start] - nums[idx]), dp) % ab;
            }
        }
        return dp[start][fuel] = ans % ab;
    }

public:
    int countRoutes(vector<int> &nums, int start, int finish, int fuel)
    {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(fuel + 1, -1));
        int ans = helper(start, finish, nums, fuel, dp);
        return ans;
    }
};
