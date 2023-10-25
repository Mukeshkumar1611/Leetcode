class Solution
{
private:
    bool helper(int idx, int k, vector<int> &stones, map<int, int> &mp, vector<vector<int>> &dp)
    {
        if (idx == stones.size() - 1)
            return true;
        if (idx >= stones.size() or k == 0)
            return false;
        if (mp.find(stones[idx] + k) == mp.end())
            return false;
        if(dp[idx][k] != -1) return dp[idx][k];

        return dp[idx][k] = helper(mp[stones[idx] + k],  k + 1, stones, mp, dp) | helper(mp[stones[idx] + k],  k - 1, stones, mp, dp) | helper(mp[stones[idx] + k],  k, stones, mp, dp);
    }

public:
    bool canCross(vector<int> &stones)
    {
        map<int, int> mp;
        int n = stones.size();
        for (int i = 0; i < n; i++)
        {
            mp[stones[i]] = i;
        }
        vector<vector<int>> dp(2001, vector<int>(2001, -1));
        return helper(0, 1, stones, mp, dp);
    }
};
