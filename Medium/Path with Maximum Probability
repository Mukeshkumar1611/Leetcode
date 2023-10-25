class Solution
{
public:
    double maxProbability(int n, vector<vector<int>> &edges, vector<double> &succProb, int start, int end)
    {
        vector<vector<pair<int, double>>> adj(n);
        for (int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }

        vector<double> ans(n, 0.0);
        queue<int> q;
        q.push(start);
        ans[start] = 1.0;

        while (!q.empty())
        {
            int front = q.front();
            q.pop();

            for (auto it : adj[front])
            {
                int nextNode = it.first;
                double distt = ans[front] * it.second;

                if (distt > ans[nextNode])
                {
                    ans[nextNode] = distt;
                    q.push(nextNode);
                }
            }
        }
        return ans[end];
    }
};
