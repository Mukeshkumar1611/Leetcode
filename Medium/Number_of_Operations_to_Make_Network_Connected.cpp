class DisjointSet
{
    vector<int> rank, parent, size;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        size.resize(n + 1);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findPar(int node)
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findPar(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);

        if (ulp_u == ulp_v)
        {
            return;
        }

        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_u] > rank[ulp_v])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v)
    {
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);

        if (ulp_u == ulp_v)
        {
            return;
        }

        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Solution
{
private:
    void dfs(int node, vector<int> &visited, vector<int> adj[])
    {
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
    int makeConnected(int n, vector<vector<int>> &connections)
    {
        vector<int> adj[n];
        for (int i = 0; i < connections.size(); i++)
        {
            int a = connections[i][0];
            int b = connections[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        vector<int> visited(n, 0);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                count++;
                dfs(i, visited, adj);
            }
        }
        cout << count << endl;
        int conns = 0;
        DisjointSet ds(n);
        for (int i = 0; i < connections.size(); i++)
        {
            if (ds.findPar(connections[i][0]) == ds.findPar(connections[i][1]))
            {
                conns++;
                
            }
            else
            {
                ds.unionByRank(connections[i][0], connections[i][1]);
            }
            
        }
        cout << conns;
        if (conns < count-1)
        {
            return -1;
        }
        return count-1;
    }
};
