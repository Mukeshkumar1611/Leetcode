class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>> adj(n, vector<int>(n, 0));
        vector<int> indegree(n, 0);
        for(auto it : roads)
        {
            adj[it[0]][it[1]] = 1;
            adj[it[1]][it[0]] = 1;
            indegree[it[0]]++;
            indegree[it[1]]++;
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                ans = max(ans, indegree[i] + indegree[j] - adj[i][j]);
            }
        }
        return ans;
    }
};
