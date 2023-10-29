class Solution 
{
private:
    int helper(int idx, vector<int> &nums, int target, vector<vector<int>> &dp)
    {
        if(target == 0) return 0;
        if(target < 0 || idx >= nums.size()) return -1e9;
        if(dp[idx][target] != -1) return dp[idx][target];
        
        int take = 1 + helper(idx + 1, nums, target - nums[idx], dp);
        int notTake = 0 + helper(idx + 1, nums, target, dp);
        
        return dp[idx][target] = max(take, notTake);
    }
    
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int target) 
    {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
       
        int ans = helper(0, nums, target, dp);
        if(ans <= -1e8)
        {
            return -1;
        }
        return ans;
    }
};