class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2) return n;

        int ans = 0;
        vector<vector<int>> dp(1001, vector<int>(1001, 1));

        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                int currDiff = nums[i] - nums[j];
                dp[i][currDiff + 500] = max(dp[i][currDiff + 500], dp[j][currDiff + 500] + 1);
                ans = max(ans, dp[i][currDiff + 500]);
            }
        }
        return ans;
    }
};
