class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        vector<int> indegree(n + 1, 0);
        indegree[0] = -1;
        vector<int> outdegree(n + 1, 0);
        indegree[0] = -1;
        vector<vector<int>> adj(n + 1);
        for(auto it : trust)
        {
            adj[it[0]].push_back(it[1]);
            indegree[it[1]]++;
            outdegree[it[0]]++;
        }    

        for(int i = 1; i <= n; i++)
        {
            if(indegree[i] == n - 1 && outdegree[i] == 0)
            {
                return i;
            }
        }
        return -1;
    }
};
