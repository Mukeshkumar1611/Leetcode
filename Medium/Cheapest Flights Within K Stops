class Solution
{
public:
    int findCheapestPrice(int n, vector<vector<int>> &flights,
                          int src, int dst, int kkk)
    {
        vector<int> dist(n, 1e8);
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;
        vector<vector<pair<int, int>>> adj(n);
        for (auto it : flights)
        {
            adj[it[0]].push_back({it[1], it[2]});
        }
        // k, node, cost
        pq.push({0, {src, 0}});
        dist[src] = 0;
        int ans = 0;
        vector<int> v1;

        while (!pq.empty())
        {
            int k = pq.top().first;
            int node = pq.top().second.first;
            int distt = pq.top().second.second;
            pq.pop();
            if(k > kkk + 1)
            {
                continue;
            }
            if (node == dst)
            {
                v1.push_back(distt);
            }

            for (auto it : adj[node])
            {
                int newNode = it.first;
                int newDist = it.second;

                if (newDist + distt < dist[newNode])
                {
                    dist[newNode] = newDist + distt;
                    pq.push({k + 1, {newNode, newDist + distt}});
                }
            }
        }
        if(v1.size() >0)
        {
            return *min_element(v1.begin(), v1.end());
        }
        return -1;
    }
};
