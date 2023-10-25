class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image,
                                  int sr, int sc, int color)
    {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        vector<vector<int>> grid = image;
        queue<pair<int, int>> q;
        q.push({sr, sc});
        int temp = image[sr][sc];

        int delRow[4] = {0, -1, 0, 1};
        int delCol[4] = {-1, 0, 1, 0};
        grid[sr][sc] = color;

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if (nrow >= 0 and nrow < n and ncol >= 0 and
                    ncol < m and grid[nrow][ncol] == temp and
                     !visited[nrow][ncol])
                {
                    visited[nrow][ncol] = 1;
                    grid[nrow][ncol] = color;
                    q.push({nrow, ncol});
                }
            }
        }
        return grid;
    }
};
