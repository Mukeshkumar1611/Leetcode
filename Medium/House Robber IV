class Solution {
private:
    int helper(int idx, vector<int> &nums, int k, int mid, vector<int> &dp)
    {
        if(idx >= nums.size()) return 0;
        if(dp[idx] != -1) return dp[idx];
        
        int take = 0;
        if(nums[idx] <= mid)
        {
            take = 1 + helper(idx + 2, nums, k, mid, dp);
        }
        
        int notTake = 0 + helper(idx + 1, nums, k, mid, dp);
        
        return dp[idx] = max(take, notTake);
    }
    
public:
    int minCapability(vector<int>& nums, int k) {
        int n = nums.size();
        
        int start = *min_element(nums.begin(), nums.end());
        int end = *max_element(nums.begin(), nums.end());
        
        int ans = 1e9;
        
        while(start <= end)
        {
            int mid = (start + end) / 2;
            vector<int> dp(n + 1, -1);
            int houses = helper(0, nums, k, mid, dp);
            if(houses >= k)
            {
                ans = min(ans, mid);
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
