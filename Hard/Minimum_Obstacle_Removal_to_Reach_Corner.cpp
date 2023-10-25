class Solution
{
public:
    int minimumObstacles(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
        q.push({0, {0, 0}});

        vis[0][0] = 1;

        while (!q.empty())
        {
            int currCost = q.top().first;
            int row = q.top().second.first;
            int col = q.top().second.second;
            q.pop();

            if (row == n - 1 && col == m - 1)
            {
                return currCost;
            }
            
            int delRow[] = {-1, 1, 0, 0};
            int delCol[] = {0, 0, 1, -1};

            for (int i = 0; i < 4; i++)
            {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol])
                {
                    if (grid[nrow][ncol] == 1)
                    {
                        q.push({currCost + 1, {nrow, ncol}});
                    }
                    else
                    {
                        q.push({currCost + 0, {nrow, ncol}});
                    }
                    vis[nrow][ncol] = 1;
                }
            }
        }
        return 0;
    }
};
