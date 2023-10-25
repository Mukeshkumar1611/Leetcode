class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        vector<int> dp(n, 1);
        vector<int> hash(n);
        int maxi = 1;
        int lastIndex = 0;
        for (int idx = 0; idx < n; idx++)
        {
            hash[idx] = idx;
            for (int prev = 0; prev < idx; prev++)
            {
                if (arr[idx] % arr[prev] == 0 and 1 + dp[prev] > dp[idx])
                {
                    dp[idx] = 1 + dp[prev];
                    hash[idx] = prev;
                }
            }
            if (dp[idx] > maxi)
            {
                maxi = dp[idx];
                lastIndex = idx;
            }
        }
        vector<int> temp;
        temp.push_back(arr[lastIndex]);
        while (hash[lastIndex] != lastIndex)
        {
            lastIndex = hash[lastIndex];
            temp.push_back(arr[lastIndex]);
        }
        reverse(temp.begin(), temp.end());
        
        return temp;
    }
};
