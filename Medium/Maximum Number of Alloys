class Solution
{
private:
    bool isPossible(int alloys, int budget, int &n, int &k, vector<vector<int>> &composition, vector<int> &stock, vector<int> &cost)
    {
        for (int i = 0; i < k; i++)
        {
            long long int tempCost = 0;
            for (int j = 0; j < n; j++)
            {
                long long required = (1LL * alloys * composition[i][j]);
                required -= stock[j];
                if(required > 0)
                {
                    tempCost = tempCost + (required * cost[j]);
                }
            }
            if(tempCost <= 1LL * budget) return 1;
        }
        return 0;
    }
public:
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>> &composition, vector<int> &stock, vector<int> &cost)
    {
        int ans = 0;
        int start = 0;
        int end = 1e9;
        
        while (start <= end)
        {
            long long mid = (start + end) / 2;
            if (isPossible(mid, budget, n, k, composition, stock, cost))
            {
                ans = max(1LL * ans, mid);
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};
