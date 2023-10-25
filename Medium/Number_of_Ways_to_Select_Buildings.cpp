class Solution {
private:
    long long dp[100005][3][4];

    long long helper(int idx, int chosen, string &s, char ch)
    {
        if(chosen == 3) return 1;
        if(idx >= s.size()) return 0;
        if(dp[idx][chosen][ch-'0'] != -1) return dp[idx][chosen][ch-'0'];

        long long notTake = helper(idx + 1, chosen, s, ch);

        long long take = 0;
        if(s[idx] != ch)
        {
            take = helper(idx, chosen + 1,s, s[idx]);
        }

        return dp[idx][chosen][ch-48] = take + notTake;
    }

public:
    long long numberOfWays(string s) {
        int n = s.size();
        memset(dp, -1, sizeof(dp));
        return helper(0, 0, s, '2');
    }
};
