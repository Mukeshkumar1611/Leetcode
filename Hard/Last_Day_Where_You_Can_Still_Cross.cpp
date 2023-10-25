class Solution
{
private:
    bool isPossible(int mid, int n, int m, vector<vector<int>> &cells)
    {
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < mid; i++)
        {
            int a = cells[i][0] - 1;
            int b = cells[i][1] - 1;
            matrix[a][b] = 1;
        }

        queue<pair<int, int>> q;

        for (int i = 0; i < m; i++)
        {
            if (matrix[0][i] == 0)
            {
                q.push({0, i});
                vis[0][i] = 1;
            }
        }

        int delRow[4] = {0, -1, 0, 1};
        int delCol[4] = {-1, 0, 1, 0};
        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            if (row == n - 1)
            {
                return true;
            }

            for (int i = 0; i < 4; i++)
            {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if (nrow >= 0 and ncol >= 0 and nrow < n and
                    ncol < m and !vis[nrow][ncol] &&
                    matrix[nrow][ncol] == 0)
                {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
        return false;
    }

public:
    int latestDayToCross(int n, int m, vector<vector<int>> &cells)
    {
        int start = 1;
        int end = cells.size();
        int ans = 0;

        while (start <= end)
        {
            int mid = (start + end) / 2;
            cout<<"l";
            if (isPossible(mid, n, m, cells))
            {
                cout << "YES" << endl;
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};
