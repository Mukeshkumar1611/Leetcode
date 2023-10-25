class Solution {
private:
    int dp[3000][1002];
    int mod = 1e9 + 7;
    
    int helper(int startPos, int endPos, int k)
    {
        if(k == 0)
        {
            if(startPos == endPos) return 1;
            return 0;
        }
        if(dp[startPos + 1000][k] != -1) return dp[startPos + 1000][k] ;

        int goLeft = helper(startPos - 1, endPos, k - 1);
        int goRight = helper(startPos + 1, endPos, k - 1);

        return dp[startPos + 1000][k] = (goLeft + goRight) % mod;
    }

public:
    int numberOfWays(int startPos, int endPos, int k) {
        memset(dp, -1, sizeof(dp));
        return helper(startPos, endPos, k);
    }
};
