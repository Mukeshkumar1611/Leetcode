class Solution {
private:
    int mod = 1e9 + 7;
    long long int helper(int idx, vector<vector<int>> &nums, int target, vector<vector<int>> &dp)
    {
        if(target == 0) return 1;
        if(idx >= nums.size()) return 0;
        if(dp[idx][target] != -1) return dp[idx][target];

        long long int ans = 0;
        for(int i = 0; i <= nums[idx][0]; i++)
        {
            if((nums[idx][1] * i) <= target)
            {
                ans += (helper(idx + 1, nums, target - (nums[idx][1] * i), dp)) % mod;
            }
            else 
            {
                break;
            }
        }

        return dp[idx][target] = ans % mod;
    }

public:
    int waysToReachTarget(int target, vector<vector<int>>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        long long int ans = helper(0, nums, target, dp) % mod;
        return ans;
    }
};
