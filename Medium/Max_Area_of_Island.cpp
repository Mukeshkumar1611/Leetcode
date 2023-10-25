class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>&grid, vector<vector<int>> &visited, int &count)
    {
        if(row < 0 or row >= grid.size() or col < 0 or col >= grid[0].size() or grid[row][col] == 0 or visited[row][col] == 1)
        {
            return;
        }
        if(grid[row][col] == 1 && !visited[row][col]) count++;

        visited[row][col] = 1;
        dfs(row+1, col, grid, visited, count);
        dfs(row-1, col, grid, visited, count);
        dfs(row, col + 1, grid, visited, count);
        dfs(row, col - 1, grid, visited, count);
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 1 && !visited[i][j])
                {
                    int count = 0;
                    dfs(i, j, grid, visited, count);
                    ans = max(ans, count);
                }
            }
        }
        return ans;
    }
};
