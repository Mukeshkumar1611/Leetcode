class Solution {
private:
    int helper(int row, int col, vector<vector<int>> &grid)
    {
        if(row >= grid.size()) return col;
        int nextCol = col + grid[row][col];
        if(nextCol < 0 or nextCol >= grid[0].size() or grid[row][col] != grid[row][nextCol])
        {
            return -1;
        }
        return helper(row + 1, nextCol, grid);
    }

public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> ans(m);

        for(int i = 0; i < m; i++)
        {
            ans[i] = helper(0, i, grid);
        }
        return ans;
    }
};
