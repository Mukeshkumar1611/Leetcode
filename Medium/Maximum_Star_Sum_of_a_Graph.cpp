class Solution
{
private:
    int ans;
    void helper(int node, vector<vector<int>> &adj, vector<int> &vals, int k)
    {
        priority_queue<int> pq;
        for (auto it : adj[node])
        {
            pq.push(vals[it]);
        }
        int sum = vals[node];
        ans = max(ans, sum);
        for (int i = 0; i < k && !pq.empty(); i++)
        {
            sum += pq.top();
            ans = max(ans, sum);
            pq.pop();
        }
        
    }

public:
    int maxStarSum(vector<int> &vals, vector<vector<int>> &edges, int k)
    {
        int n = vals.size();
        vector<vector<int>> adj(n);

        for (auto it : edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            helper(i, adj, vals, k);
        }
        return ans;
    }
};
