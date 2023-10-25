class Solution {
private:
    int binarySearch(int currIdx, vector<vector<int>> &offers)
    {
        int start = currIdx + 1;
        int end = offers.size() - 1;
        int ans = end + 1;

        while(start <= end)
        {
            int mid = (start + end) / 2;

            if(offers[mid][0] > offers[currIdx][1])
            {
                ans = min(ans, mid);
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }

    int helper(int idx, int &n, vector<vector<int>> &offers, vector<int> &dp)
    {
        if(idx >= offers.size()) return 0;
        if(dp[idx] != -1) return dp[idx];
        
        int next_idx = binarySearch(idx, offers);

        int take = offers[idx][2] + helper(next_idx, n, offers, dp);
        int notTake = 0 + helper(idx + 1, n, offers, dp);

        return dp[idx] = max(take, notTake);
    }
public:
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        vector<int> dp(offers.size() + 1, -1);
        sort(offers.begin(), offers.end());
        return helper(0, n, offers, dp);
    }
};
