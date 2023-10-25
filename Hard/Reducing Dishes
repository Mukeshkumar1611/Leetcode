class Solution {
private:
    int helper(int idx, int n, vector<int>& satisfaction, int count, vector<vector<int>> &dp)
    {
        if(idx >= n) return 0;
        if(dp[idx][count] != -1) return dp[idx][count];

        int take = (satisfaction[idx] * (count + 1)) + helper(idx + 1, n, satisfaction, count + 1, dp);
        int notTake = helper(idx + 1, n, satisfaction, count, dp);
        
        return dp[idx][count] = max(take, notTake); 
    }

public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int n = satisfaction.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return helper(0, n, satisfaction, 0, dp);
    }
};
