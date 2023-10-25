class Solution {
private:
    int count0s(string s)
    {
        int ans = 0;
        for(auto it : s)
        {
            if(it == '0')
            {
                ans++;
            }
        }
        return ans;
    }

    int count1s(string s)
    {
        int ans = 0;
        for(auto it : s)
        {
            if(it == '1')
            {
                ans++;
            }
        }
        return ans;
    }

    int helper(int idx, vector<string>& strs, int m, int n, int zeros, int ones,  vector<vector<vector<int>>>&dp)
    {
        if(idx >= strs.size()) return 0;
        if(dp[idx][ones][zeros] != -1) return dp[idx][ones][zeros];

        int take = 0;
        int c0s = count0s(strs[idx]);
        int c1s = count1s(strs[idx]);
        if(zeros + c0s <= m && ones + c1s <= n)
        {
            take = 1 + helper(idx + 1, strs, m, n, zeros + c0s, ones + c1s, dp);
        }
        int notTake = helper(idx + 1, strs, m, n, zeros, ones, dp);

        return dp[idx][ones][zeros] = max(take, notTake);
    }

public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>> dp(strs.size() + 1, vector<vector<int>>(n + 1, vector<int>(m + 1, -1)));
        return helper(0, strs, m, n, 0, 0, dp);
    }
};
