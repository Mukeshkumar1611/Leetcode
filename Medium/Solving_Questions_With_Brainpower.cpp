class Solution {
private:
    long long helper(int idx, vector<vector<int>> &questions, vector<long long> &dp)
    {
        if(idx >= questions.size())
        {
            return 0;
        }
        if(dp[idx] != -1)
        {
            return dp[idx];
        }
        long long int take = questions[idx][0] + helper(idx + questions[idx][1] + 1, questions, dp);
        long long notTake = 0 + helper(idx + 1, questions, dp);
        return dp[idx] = max(take, notTake);
    }
    
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n + 1, -1);
        return helper(0, questions, dp);
    }
};
