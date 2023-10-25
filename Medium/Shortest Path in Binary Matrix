class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if(grid[0][0] == 1 or grid[n-1][m-1] == 1)
        {
            return -1;
        }
        queue<pair<int, int>> q;
        q.push({0, 0});
        int delRow[] = {1,-1,0,0,1,1,-1,-1};
        int delCol[] = {0,0,1,-1,1,-1,1,-1};
        int ans = 0;

        while(!q.empty())
        {
            ans++;
            int s = q.size();
            for(int i = 0; i < s; i++)
            {
                int row = q.front().first;
                int col = q.front().second;
                q.pop();

                if(row == n - 1 && col == m-1)
                {
                    return ans;
                }

                for(int j = 0; j < 8; j++)
                {
                    int nrow = row + delRow[j];
                    int ncol = col + delCol[j];

                    if(nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and grid[nrow][ncol] == 0)
                    {
                        grid[nrow][ncol] = 1;
                        q.push({nrow, ncol});
                    }
                }
            }
        }
        return -1;
    }
};
