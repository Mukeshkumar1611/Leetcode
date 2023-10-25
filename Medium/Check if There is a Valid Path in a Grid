class Solution
{
private:
    void dfs(int row, int col, vector<vector<int>> &grid, vector<vector<int>> &visited, int &flag)
    {
        if (row < 0 or row >= grid.size() or col < 0 or col >= grid[0].size() or
            flag == 1 or visited[row][col] == 1)
        {
            return;
        }
        visited[row][col] = 1;
        if (row == grid.size() - 1 and col == grid[0].size() - 1)
        {
            flag = 1;
            return;
        }

        if (grid[row][col] == 1)
        {
            if (col + 1 < grid[0].size() && (grid[row][col + 1] == 1 or grid[row][col + 1] == 3 or grid[row][col + 1] == 5))
            {
                dfs(row, col + 1, grid, visited, flag);
            }

            if(col - 1 >= 0 && (grid[row][col - 1] == 1 or grid[row][col - 1] == 4 or grid[row][col - 1] == 6))
            {
                dfs(row, col - 1, grid, visited, flag);
            }

        }
        if (grid[row][col] == 2)
        {
            if (row + 1 < grid.size() && (grid[row + 1][col] == 2 or grid[row + 1][col] == 6 or grid[row + 1][col] == 5))
                dfs(row + 1, col, grid, visited, flag);

            if (row -1 >= 0 && (grid[row - 1][col] == 2 or grid[row -1][col] == 3 or grid[row -1][col] == 4))
                dfs(row - 1, col, grid, visited, flag);
            
        }
        if (grid[row][col] == 3)
        {
            if (row + 1 < grid.size() &&
                (grid[row + 1][col] == 2 or grid[row + 1][col] == 6 or grid[row + 1][col] == 5))
                dfs(row + 1, col, grid, visited, flag);

            if (col - 1 >= 0 &&
                (grid[row][col - 1] == 1 or grid[row][col - 1] == 4 or grid[row][col - 1] == 6))
                dfs(row, col - 1, grid, visited, flag);
        }
        if (grid[row][col] == 4)
        {
            if (row + 1 < grid.size() && (grid[row + 1][col] == 2 or
                                          grid[row + 1][col] == 6 or
                                          grid[row + 1][col] == 5))
                dfs(row + 1, col, grid, visited, flag);

            if (col + 1 < grid[0].size() && (grid[row][col + 1] == 1 or
                                             grid[row][col + 1] == 5 or
                                             grid[row][col + 1] == 3 ))
            {
                dfs(row, col + 1, grid, visited, flag);
            }
        }
        if (grid[row][col] == 5)
        {
            if (row - 1 >= 0 && (grid[row - 1][col] == 2 or
                                 grid[row - 1][col] == 4
                                 or grid[row - 1][col] == 3))
                dfs(row - 1, col, grid, visited, flag);

            if (col - 1 >= 0 && (grid[row][col - 1] == 1 or
                                 grid[row][col - 1] == 4 or
                                 grid[row][col - 1] == 6))
                dfs(row, col - 1, grid, visited, flag);
        } 
        if(grid[row][col] == 6)
        {
            if (col + 1 < grid[0].size() && (grid[row][col + 1] == 1 or grid[row][col + 1] == 3 or grid[row][col + 1] == 5))
                dfs(row, col + 1, grid, visited, flag);

            if (row - 1 >= 0 && (grid[row - 1][col] == 3 or grid[row - 1][col] == 4 or grid[row - 1][col] == 2))
                dfs(row - 1, col, grid, visited, flag);
        }
    }

public:
    bool hasValidPath(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int flag = 0;
        dfs(0, 0, grid, visited, flag);
        if (flag == 1)
        {
            return true;
        }
        return false;
    }
};
