class Solution
{
public:
    vector<int> topologicalSort(vector<int> adjRev[], int *indegree,
                                int n)
    {
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        vector<int> ans;

        while (!q.empty())
        {
            int front = q.front();
            q.pop();
            ans.push_back(front);

            for (auto it : adjRev[front])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }
        return ans;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<int> adj[n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < graph[i].size(); j++)
            {
                adj[i].push_back(graph[i][j]);
            }
        }

        vector<int> adjRev[n];
        int indegree[n];
        for (int i = 0; i < n; i++)
        {
            indegree[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (auto it : adj[i])
            {
                adjRev[it].push_back(i);
                indegree[i]++;
            }
        }
        vector<int> ans = topologicalSort(adjRev, indegree, n);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
