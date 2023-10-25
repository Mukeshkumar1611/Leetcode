class Solution {
private:
    void dfs(int row, int col, vector<vector<int>> &grid, int &count, vector<vector<int>> &visited)
    {
        if(row < 0 or row >= grid.size() or col < 0 or col >= grid[0].size() or grid[row][col]==0 or visited[row][col] == 1)
        {
            return;
        }
        visited[row][col] = 1;
        count += grid[row][col];
        dfs(row + 1, col, grid, count, visited);
        dfs(row - 1, col, grid, count, visited);
        dfs(row, col + 1, grid, count, visited);
        dfs(row, col - 1, grid, count, visited);
    }

public:
    int findMaxFish(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        int maxi = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] > 0)
                {
                    vector<vector<int>> visited(n, vector<int>(m, 0));
                    int count = 0;
                    dfs(i, j, grid, count, visited);
                    maxi = max(maxi, count);
                }
            }
        }
        return maxi;
    }
};
