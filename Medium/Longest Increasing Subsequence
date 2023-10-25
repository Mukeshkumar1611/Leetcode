class Solution {
public:

    int helper(int idx, vector<int>&nums, int prev, vector<vector<int>> &dp)
    {
        if(idx == nums.size()) return 0;
        if(dp[idx][prev+1] != -1) return dp[idx][prev+1];
        int len = 0 + helper(idx + 1, nums, prev, dp);
        if(prev == -1 or nums[idx] > nums[prev])
        {
            len = max(len, 1 + helper(idx + 1, nums, idx, dp));
        }
        return dp[idx][prev+1] = len;
    }

    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size() + 1, vector<int>(nums.size() + 1, 0));
        for(int idx = nums.size() - 1; idx >=  0; idx--)
        {
            for(int prev = idx - 1; prev >= -1; prev--)
            {
                int len = 0 + dp[idx + 1][prev + 1];
                if(prev == -1 or nums[idx] > nums[prev])
                {
                    len = max(len, 1 + dp[idx + 1][idx + 1]);
                }
                dp[idx][prev+1] = len;
            }
        }
        return dp[0][0];
    }
};
