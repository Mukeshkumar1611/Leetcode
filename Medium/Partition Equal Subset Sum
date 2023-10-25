class Solution
{
public:
    int helper(int idx, int k, vector<int> &nums, vector<vector<int>> &dp){
        if (k == 0)
            return 1;
        if (idx == 0)
            return nums[idx] == k;
        if (dp[idx][k] != -1)
        {
            return dp[idx][k];
        }
        int pick = 0;
        if (nums[idx] <= k)
        {
            pick = helper(idx - 1, k - nums[idx], nums, dp);
        }
        int notPick = helper(idx - 1, k, nums, dp);

        return dp[idx][k] = (pick | notPick);
    }

    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];

        if (sum % 2 == 1)
            return false;
            
        vector<vector<int>> dp(nums.size(), vector<int>((sum/2) + 1,  -1));
        if(helper(nums.size() - 1, sum / 2, nums, dp) == 1) return true;
        return false;
    }
};
