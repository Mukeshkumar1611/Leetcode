
class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int sum = 0;

        int k = m * n;
        while (k > 0)
        {
            priority_queue<int> pq;
            for (int i = 0; i < n; i++)
            {
                vector<int> v1 = grid[i];
                sort(v1.begin(), v1.end());
                pq.push(v1[v1.size() - 1]);
                v1[v1.size() - 1] = -1e9;
                grid[i] = v1;
            }
            k = k - n;
            sum += pq.top();
        }
        return sum;
    }
};
