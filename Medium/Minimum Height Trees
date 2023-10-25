
class Solution
{
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges)
    {
        vector<int> adj[n];
        vector<int> indegree(n, 0);
        for (auto it : edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            indegree[it[0]]++;
            indegree[it[1]]++;
        }

        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 1)
            {
                q.push(i);
            }
        }
        vector<int> ans;
        while (!q.empty())
        {
            ans.clear();
            int s = q.size();
            for (int i = 0; i < s; i++)
            {
                int front = q.front();
                q.pop();
                ans.push_back(front);

                for (auto it : adj[front])
                {
                    indegree[it]--;
                    if (indegree[it] == 1)
                    {
                        q.push(it);
                    }
                }
            }
        }
        if (n == 1)
        {
            return {0};
        }
        return ans;
    }
};
