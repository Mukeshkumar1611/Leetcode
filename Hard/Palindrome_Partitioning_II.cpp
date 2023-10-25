class Solution {
public:

    bool isPalindrome(int i, int j, string &s)
    {
        while(i < j)
        {
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    int helper(int i, int n, string &s, vector<int>&dp)
    {
        if(i == n) return 0;
        if(dp[i] != -1) return dp[i];
        int mini = INT_MAX;
        for(int j = i; j < n; j++)
        {
            if(isPalindrome(i, j, s))
            {
                int cost = 1 + helper(j+1, n, s, dp);
                mini = min(cost, mini);
            }
        }
        return dp[i] = mini;
    }

    int minCut(string s) {
        vector<int> dp(s.size(), -1);
        int n = s.size();
        return helper(0, n, s, dp) - 1;
    }
};
