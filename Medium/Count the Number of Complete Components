class Solution {
private:
    void dfs(int node, vector<int> &visited, vector<int> &v1, vector<int> adj[])
    {
        visited[node] = 1;
        v1.push_back(node);

        for(auto it : adj[node])
        {
            if(!visited[it])
            {
                dfs(it, visited, v1, adj);
            }
        }
    }

public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int> visited(n, 0);
        vector<int> adj[n];

        for(int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(!visited[i])
            {
                vector<int> v1;
                dfs(i, visited, v1, adj);
                int count = 0;
                for(int i = 0; i < v1.size(); i++)
                {
                    if(adj[v1[i]].size() >= v1.size() - 1)
                    {
                        count++;
                    }
                }
                if(count >= v1.size())
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
