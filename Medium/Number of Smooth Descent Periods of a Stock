class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        vector<int> pre(n, 1);
        long long ans = 0;

        for(int i = 1; i < n; i++)
        {
            if(prices[i] == prices[i - 1] - 1) // Check Whether difference is exactly 1.
            {
                pre[i] = pre[i - 1] + 1;
            }
        }

        for(int i = 0; i < n; i++)
        {
            ans += pre[i];
        }
        return ans;        
    }
};
