class Solution {
public:

    int helper(int i, int j, vector<int> &piles, vector<vector<int>>&dp)
    {
        if(i == piles.size()) return 0;
        if(j < 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        int front = max(piles[i] + helper(i+1, j, piles, dp), helper(i+1, j, piles, dp));
        int back = max(piles[j] + helper(i, j-1, piles, dp), helper(i, j-1, piles, dp));

        return dp[i][j] = max(front, back);
    }

    bool stoneGame(vector<int>& piles) {
        int i = 0;
        int j = piles.size() - 1;
        int sum = 0;
        for(int i = 0; i < piles.size(); i++)
        {
            sum = sum + piles[i];
        }
        int n = piles.size();
        vector<vector<int>>dp(n, vector<int>(n, -1));
        int alice = helper(i, j, piles, dp);
        if(alice > sum/2)
        {
            return true;
        }
        return false;
    }
};
