class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        for(int i = 0; i < prerequisites.size(); i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        int indegree[n];
        for(int i = 0; i < n; i++) indegree[i] = 0;

        for(int i = 0; i < n; i++)
        {
            for(auto it : adj[i])
            {
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i = 0; i < n; i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }
        vector<int> ans;
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            ans.push_back(front);
            for(auto it : adj[front])
            {
                indegree[it]--;
                if(indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }
        if(ans.size() != n) return {};
        return ans;
    }
};
