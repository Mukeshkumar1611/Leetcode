class Solution {
public:

    // int helper(int idx, vector<int>& cost, vector<int>&dp)
    // {
    //     if(idx == 0 or idx == 1) return cost[idx];
    //     if(dp[idx] != -1) return dp[idx];

    //     int one = helper(idx - 1, cost, dp);
    //     int second = helper(idx - 2, cost, dp);

    //     int ans = cost[idx] + min(one, second);
    //     return dp[idx] = ans;
    // }

    // int minCostClimbingStairs(vector<int>& cost) {
    //     vector<int>dp(cost.size(), -1);
    //     return min(helper(cost.size() - 1, cost, dp), helper(cost.size() -2 , cost, dp)); 
    // }

     int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(), 0);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i = 2; i < cost.size(); i++)
        {
            int first = dp[i-1];
            int second = dp[i-2];
            int ans = cost[i] + min(first, second);
            dp[i] = ans;
        }
        return min(dp[cost.size()-1], dp[cost.size()-2]);
    }
};
