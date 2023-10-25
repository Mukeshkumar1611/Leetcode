class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        map<int, int>row1s;
        map<int, int>col1s;
        map<int, int>row0s;
        map<int, int> col0s;

        for(int i = 0; i < n; i++)
        {
            int c0 = 0;
            int c1 = 0;
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 0)
                {
                    c0++;
                }
                else
                {
                    c1++;
                }
            }
            row0s[i] = c0;
            row1s[i] = c1;
        }
        
        for(int j = 0; j < m; j++)
        {
            int c0 = 0;
            int c1 = 0;
            for(int i = 0; i < n; i++)
            {
                if(grid[i][j] == 0) c0++;
                else c1++;
            }
            col0s[j] = c0;
            col1s[j] = c1;
        }
        vector<vector<int>> ans(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                ans[i][j] = row1s[i] + col1s[j] - row0s[i] - col0s[j];
            }
        }
        return ans;
    }
};
