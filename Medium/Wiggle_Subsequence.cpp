class Solution {
private:
    int dp[1002][1002][2];
    int helper(int idx, vector<int> &nums, int prev, int takeNeg)
    {
        if(idx >= nums.size()) return 0;
        else if(dp[idx][prev][takeNeg] != -1) return dp[idx][prev][takeNeg];

        if(takeNeg)
        {
            if(nums[idx] - nums[prev] < 0)
            {
                int a = 1 + helper(idx + 1, nums, idx, !takeNeg);
                int b = helper(idx + 1, nums, prev, takeNeg);
                return dp[idx][prev][takeNeg] = max(a, b);
            } 
            else
            {
                return dp[idx][prev][takeNeg] = helper(idx + 1, nums, prev, takeNeg);
            }
        }
        else
        {
            if(nums[idx] - nums[prev] > 0)
            {
                int a = 1 + helper(idx + 1, nums, idx, !takeNeg);
                int b = helper(idx + 1, nums, prev, takeNeg);
                return dp[idx][prev][takeNeg] = max(a, b);
            }
            else
            {
                return dp[idx][prev][takeNeg] = helper(idx + 1, nums, prev, takeNeg);
            }
        }
    }

public:
    int wiggleMaxLength(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return 1 + (max(helper(1, nums, 0, 0), helper(1, nums, 0, 1)));
    }
};
