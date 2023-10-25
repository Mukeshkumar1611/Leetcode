class Solution {
private:
    void dfs(int currNode, vector<vector<int>> &adj, vector<int> &v1, vector<int> &vis)
    {
        vis[currNode] = 1;
        for(auto it : adj[currNode])
        {
            if(!vis[it])
            {
                v1.push_back(it);
                dfs(it, adj, v1, vis);
            }
        }
    }

public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) 
    {
        vector<vector<int>> adj(n + 1);
        for(auto it : edges)
        {
            adj[it[1]].push_back(it[0]);
        }

        vector<vector<int>> ans;
        for(int i = 0; i < n; i++)
        {
            vector<int> v1;
            vector<int> vis(n, 0);
            dfs(i, adj, v1, vis);
            sort(v1.begin(), v1.end());
            ans.push_back(v1);
        }
        return ans;
    }
};
