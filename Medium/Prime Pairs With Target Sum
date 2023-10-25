class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> ans;
        vector<int> prime(n + 1, 1);
        // if(n == 1)
        // {
        //     return ans;
        // }
        prime[0] = 0;
        prime[1] = 0;
        
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(prime[i] == 1)
            {
                for(int j = i * i; j <= n; j+=i)
                {
                    prime[j] = 0;
                }
            }
        }
        
        for(int i = 1; i <= n/2; i++)
        {
            if(prime[i] == 1 && prime[n-i] == 1)
            {
                ans.push_back({i, n-i});
            }
        }
        return ans;
    }
};
