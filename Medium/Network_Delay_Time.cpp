class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) 
    {
        vector<vector<pair<int, int>>> adj(n + 2);
        for(auto it : times)
        {
            adj[it[0]].push_back({it[1], it[2]});
        }   

        vector<int> dist(n + 1, 1e9);
        dist[0] = -1;
        dist[k] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({k, 0});


        while(!pq.empty())
        {
            int currNode = pq.top().first;
            int currDist = pq.top().second;
            pq.pop();

            for(auto it : adj[currNode])
            {
                int thisNode = it.first;
                int thisDist = it.second;
                if(currDist + thisDist < dist[thisNode])
                {
                    dist[thisNode] = currDist + thisDist;
                    pq.push({thisNode, currDist + thisDist});
                } 
            }
        }
        for(int i = 1; i <= n; i++)
        {
            if(dist[i] == 1e9) return -1;
        }
        return *max_element(dist.begin(), dist.end());
    }
};
