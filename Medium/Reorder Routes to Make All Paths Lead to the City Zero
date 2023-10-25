class Solution
{
private:
    void dfs(int node, vector<int> adj[], vector<int> adjTemp[], vector<int> &visited, int &ans)
    {
        visited[node] = 1;
        for (auto it : adjTemp[node])
        {
            if (!visited[it])
            {
                bool flag = 0;
                for (auto itr : adj[it])
                {
                    if (itr == node)
                    {
                        flag = 1;
                    }
                }
                if (!flag)
                {
                    ans++;
                }
                dfs(it, adj, adjTemp, visited, ans);
            }
        }
    }

public:
    int minReorder(int n, vector<vector<int>> &connections)
    {
        vector<int> adj[n];
        for (auto it : connections)
        {
            adj[it[0]].push_back(it[1]);
        }

        vector<int> adjTemp[n];
        for (auto it : connections)
        {
            adjTemp[it[0]].push_back(it[1]);
            adjTemp[it[1]].push_back(it[0]);
        }
        vector<int> visited(n, 0);
        int ans = 0;
        dfs(0, adj, adjTemp, visited, ans);
        return ans;
    }
};
