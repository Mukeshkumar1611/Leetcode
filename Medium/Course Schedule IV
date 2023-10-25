class Solution {
private:
    void dfs(vector<int> adj[], vector<int>&visited, int source, int desti, bool &temp)
    {
        if(visited[source] == 1) return;

        visited[source] = 1; 
        if(source == desti)
        {
            temp = true;
            return;
        }

        for(auto it : adj[source])
        {
            if(!visited[it])
            {
                dfs(adj, visited, it, desti, temp);
            }
        }
    }

public:
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<int> adj[n];
        for(int i = 0; i < prerequisites.size(); i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        vector<bool> ans;

        for(int i = 0; i < queries.size(); i++)
        {
            vector<int> visited(n, 0);
            bool temp = false;
            dfs(adj, visited, queries[i][0], queries[i][1], temp);
            ans.push_back(temp);
        }
        return ans;
    }
};
