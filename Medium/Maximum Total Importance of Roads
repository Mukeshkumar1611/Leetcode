class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) 
    {
        long long ans = 0;
        int indegree[n];
        for(int i = 0; i < n; i++)
        {
            indegree[i] = 0;
        }
        vector<int> adj[n];
        for(auto it : roads)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            indegree[it[0]]++;
            indegree[it[1]]++;
        }

        vector<pair<int, int>> v1;
        for(int i = 0; i < n; i++)
        {
            v1.push_back({indegree[i], i});
        }
        
        sort(v1.rbegin(), v1.rend());
        for(auto it : v1)
        {
            cout << it.first << " " << it.second << endl;
        }
        vector<int> vals(n, 0);
        int k = n;
        for(int i = 0; i < n; i++)
        {
            vals[v1[i].second] = k;
            k--;
        }
        for(int i = 0; i < n; i++)
        {
            cout << vals[i] << " ";
        }
        for(auto it : roads)
        {
            ans += vals[it[0]];
            ans += vals[it[1]];
        }
        return ans;
    }
};
