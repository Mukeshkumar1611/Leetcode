class Solution
{
public:
    int countPaths(int n, vector<vector<int>> &roads)
    {
        int mod = (long long)(1e9+7);
        vector<pair<long long,long long>> adj[n];

        for(auto it:roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }

        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> pq;
        
        vector<long long int> dist(n,1e18);
        vector<long long int> way(n,0);

        dist[0]=0;
        way[0] = 1;

        pq.push({0,0});

        while(!pq.empty()){
            long long int node = pq.top().second;
            long long int dis  = pq.top().first;
            pq.pop();
            for(auto itr: adj[node]){
                long long int adjNode = itr.first;
                long long int d       = itr.second;
                // below code is for the case when we are reaching for the first time with
                // that less distance
                if(d+dis < dist[adjNode]){
                    dist[adjNode]=d+dis;
                    way[adjNode] = way[node];
                    pq.push({d+dis,adjNode});
                }
                else if(d+dis == dist[adjNode])
                    way[adjNode] = (way[adjNode]+way[node])%mod;    
            }
        }
        return way[n-1]%mod;
    }
};
