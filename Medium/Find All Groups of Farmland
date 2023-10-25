class Solution
{
private:
    void dfs(vector<int> &v1, vector<vector<int>> &land,
            int n, int m, vector<vector<int>> &visited, int row, int col, 
            int currRow, int currCol)
    {
        if (row >= n or col >= m or row < 0 or col < 0 or
            land[row][col] == 0 or visited[row][col] == 1)
        {
            return;
        }
        visited[row][col] = 1;
        if (row >= currRow && col >= currCol)
        {
            v1[2] = row;
            v1[3] = col;
            currRow = v1[2];
            currCol = v1[3];
        }
        dfs(v1, land, n, m, visited, row + 1, col, currRow, currCol);
        dfs(v1, land, n, m, visited, row - 1, col, currRow, currCol);
        dfs(v1, land, n, m, visited, row, col + 1, currRow, currCol);
        dfs(v1, land, n, m, visited, row, col - 1, currRow, currCol);
    }

public:
    vector<vector<int>> findFarmland(vector<vector<int>> &land)
    {
        vector<vector<int>> ans;
        int n = land.size();
        int m = land[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (land[i][j] == 1 && visited[i][j] == 0)
                {
                    vector<int> v1(4);
                    v1[0] = i;
                    v1[1] = j;
                    dfs(v1, land, n, m, visited, i, j, i, j);
                    ans.push_back(v1);
                }
            }
        }
        return ans;
    }
};
