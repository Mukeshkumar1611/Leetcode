class Solution {
private:
    unordered_set<int> dayNeeded;
    int helper(vector<int> &days, vector<int> &costs, int currDay, vector<int> &dp)
    {
        if(currDay > days[days.size() - 1]) return 0;
        if(dayNeeded.find(currDay) == dayNeeded.end())
        {
            return helper(days, costs, currDay + 1, dp);
        }
        if(dp[currDay] != -1) return dp[currDay];
        int oneDayPass = costs[0] + helper(days, costs, currDay + 1, dp);
        int sevenDayPass = costs[1] + helper(days, costs, currDay + 7, dp);
        int thirtyDayPass = costs[2] + helper(days, costs, currDay + 30, dp);
        return dp[currDay] = min(oneDayPass, min(sevenDayPass, thirtyDayPass));
    }

public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        for(auto it : days)
        {
            dayNeeded.insert(it);
        }
        int n = days[days.size() - 1];
        vector<int> dp(n + 1, -1);
        return helper(days, costs, 1, dp);
    }
};
