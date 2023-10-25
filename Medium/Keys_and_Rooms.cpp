class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        int n = rooms.size();
        vector<int> adj[n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < rooms[i].size(); j++)
            {
                adj[i].push_back(rooms[i][j]);
            }
        }

        queue<int> q;
        for (int j = 0; j < rooms[0].size(); j++)
        {
            q.push(rooms[0][j]);
        }

        vector<int> visited(n, 0);
        visited[0]=1;

        while (!q.empty())
        {
            int front = q.front();
            q.pop();
            if (!visited[front])
            {
                visited[front] = 1;
                for (auto it : adj[front])
                {
                    q.push(it);
                }
            }
        }
        for(auto it : visited) cout << it << ' ';
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == false)
                return false;
        }
        return true;
    }
};
