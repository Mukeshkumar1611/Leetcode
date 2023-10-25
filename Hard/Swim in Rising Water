class Solution
{
public:
    int swimInWater(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));

        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
        q.push({grid[0][0], {0, 0}});
        visited[0][0] = 1;

        int delRow[] = {0, -1, 0, 1};
        int delCol[] = {-1, 0, 1, 0};

        while (!q.empty())
        {
            int time = q.top().first;
            int row = q.top().second.first;
            int col = q.top().second.second;
            q.pop();
            if (row == n - 1 and col == m - 1)
            {
                return time;
            }

            for (int i = 0; i < 4; i++)
            {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if (nrow >= 0 and ncol >= 0 and nrow < n and ncol < m)
                {
                    if (!visited[nrow][ncol])
                    {
                        visited[nrow][ncol] = 1;
                        int ab = max(time, grid[nrow][ncol]);
                        q.push({ab, {nrow, ncol}});
                    }
                }
            }
        }
        return -1;
    }
};
