class Solution {
private:
    int helper(int idx, vector<int> &nums, int target, vector<vector<int>> &dp)
    {
        if(idx >= nums.size()) return 0;
        if(target == 0)
        {
            return 1;
        }
        if(target < 0) 
        {
            return 0;
        }
        if(dp[idx][target] != -1) return dp[idx][target];
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum = sum + helper(i ,nums, target - nums[i], dp);
        }
        return dp[idx][target] = sum;
    }

public:
    int combinationSum4(vector<int>& nums, int target)
    {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return helper(0, nums, target, dp);
    }
};
