class Solution {
private:
    
    int helper(int row, int sum, vector<vector<int>> &mat, int &target, vector<vector<int>> &dp)
    {
        if(row == mat.size()) return abs(sum - target);
        if(dp[row][sum] != -1) return dp[row][sum];

        int ans = 1e9;
        for(int col = 0; col < mat[0].size(); col++)
        {
            ans = min(ans, helper(row + 1, sum + mat[row][col], mat, target, dp));
        }
        return dp[row][sum] = ans;
    }

public:
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> dp(70, vector<int>(5000, -1));
        return helper(0, 0, mat, target, dp);
        
    }
};
