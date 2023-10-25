// Max sum og non adjacent elements

class Solution {
public:

    // int helper(int idx, vector<int>& nums, vector<int>&dp)
    // {
    //     if(idx == 0) return nums[idx];
    //     if(idx < 0) return 0;
    //     if(dp[idx] != -1) return dp[idx];

    //     int first = nums[idx] + helper(idx - 2, nums, dp);
    //     int second = 0 + helper(idx - 1, nums, dp);

    //     return dp[idx] = max(first, second);
    // }

    // int rob(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int>dp(n, -1);
    //     return helper(n-1, nums, dp);
    // }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n, 0);
        dp[0] = nums[0];
        for(int i = 1;i < n; i++)
        {
            int take = nums[i];
            if(i > 1) take = take + dp[i - 2];
            int notTake = 0;
            if(i > 0) notTake = notTake + dp[i-1];

            dp[i] = max(take, notTake);
        }
        return dp[n-1];
    }
};
