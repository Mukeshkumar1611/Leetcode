class Solution {
private:
    bool helper(int idx, int n, vector<int> &nums, vector<int> &dp)
    {
        if(idx >= n) return 1;
        if(dp[idx] != -1) return dp[idx];
        int ans = 0;

        if(idx + 1 < n && nums[idx] == nums[idx + 1])
        {
            ans |= helper(idx + 2, n, nums, dp);
        }
        if(idx + 2 < n && nums[idx] == nums[idx + 1] && nums[idx + 1] == nums[idx + 2])
        {
            ans |= helper(idx + 3, n, nums, dp);
        }
        if(idx + 2 < n && nums[idx] + 1 == nums[idx + 1] && nums[idx + 1] + 1 == nums[idx + 2])
        {
            ans |= helper(idx + 3, n, nums, dp);
        }
        return dp[idx] = ans;
    }

public:
    bool validPartition(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        return helper(0, n, nums, dp);
    }
};
