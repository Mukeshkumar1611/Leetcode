class Solution {
private:
    int helper(int idx, vector<vector<int>> &grid, int k, vector<vector<int>>&dp)
    {
        if(idx >= grid.size() || k <= 0) return 0;
        if(dp[idx][k] != -1) return dp[idx][k];

        int take = 0;
        for(int i = 0; (i+ 1 <= k) && i < grid[idx].size(); i++)
        {
            take = max(take, (grid[idx][i] + helper(idx + 1, grid, k - (i + 1), dp)));
        }

        int notTake = helper(idx + 1, grid, k, dp);

        return dp[idx][k] = max(take, notTake);
    }

public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        vector<vector<int>> grid(n);
        for(int i = 0; i < n; i++)
        {
            int sum = 0;
            vector<int> v1;
            for(int j = 0; j < piles[i].size(); j++)
            {
                sum += piles[i][j];
                v1.push_back(sum);
            }
            grid[i] = v1;
        }
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));

        return helper(0, grid, k, dp);  
    }
};
