class Solution {
public:

    int helper(int idx, int n, vector<int>&arr, int k, vector<int>&dp)
    {
        if(idx == n) return 0;
        if(dp[idx] != -1) return dp[idx];
        int maxi = INT_MIN;
        int ans = INT_MIN;
        int len = 0;
        for(int i = idx; i < min(n, idx + k); i++)
        {
            len++;
            maxi = max(maxi, arr[i]);
            int sum = len * maxi + helper(i+1, n, arr, k, dp);
            ans = max(ans, sum); 
        }
        return dp[idx]= ans;
    }

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int> dp(arr.size(), -1);
        return helper(0, arr.size(), arr, k, dp);
    }
};
