class Solution
{
public:
    int minScore(int n, vector<vector<int>> &roads)
    {
        vector<pair<int, int>> adj[n + 1];
        for (auto it : roads)
        {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        queue<pair<int, int>> q;
        q.push({1, 1e8});
        vector<int> visited(n + 1, 0);

        int ans = 1e9;
        int temp = 1e9;
        visited[1] = 1;
        while (!q.empty())
        {
            int node = q.front().first;
            int wt = q.front().second;
            q.pop();
            visited[node] = 1;
            

            for (auto it : adj[node])
            {
                if (!visited[it.first])
                {
                    ans = min(ans, it.second);
                    q.push({it.first, it.second});
                }
            }
        }
        return ans;
    }
};
