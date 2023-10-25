class Solution
{
private:
    void dfs(int node, vector<int>&visited, vector<int> adj[]){
        visited[node] = 1;
        for (auto it : adj[node])
        {
            if (!visited[it])
            {
                dfs(it, visited, adj);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int v = isConnected.size();
        vector<int> adj[v];
        vector<int> visited(v, 0);
        int count = 0;

        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if (isConnected[i][j] == 1 and i != j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
            {
                count++;
                dfs(i, visited, adj);
            }
        }
        return count;
    }
};
