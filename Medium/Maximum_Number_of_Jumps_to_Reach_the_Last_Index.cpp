class Solution {
private:
    int helper(int idx, int target, vector<int>&nums, int &count, vector<int>&dp)
    {
        if(idx == nums.size()-1)
        {
            return 0;
        }
        if(dp[idx] != -1)
        {
            return dp[idx];
        }
        // if(idx >= nums.size())
        // {
        //     return 0;
        // }
        int ans = -1e9;
        for(int i =  idx + 1; i < nums.size(); i++)
        {
            if(nums[i] - nums[idx] >= -target && nums[i] - nums[idx] <= target)
            {
                ans = max(ans, 1 + helper(i, target, nums, count, dp));
            }
        }
        return dp[idx] = ans;
    }
    
public:
    int maximumJumps(vector<int>& nums, int target) {
        int count = 0;
        vector<int> dp(nums.size(), -1);
        int ans = helper(0, target, nums, count, dp);
        if(ans > 0)
        {
            return ans;
        }
        return -1;
       
    }
};
