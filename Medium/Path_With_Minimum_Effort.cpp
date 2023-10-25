class Solution
{
public:
    int minimumEffortPath(vector<vector<int>> &heights)
    {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 1e8));
        ans[0][0] = 0;

        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            q;
        q.push({0, {0, 0}});
        int delRow[] = {0, -1, 0, 1};
        int delCol[] = {-1, 0, 1, 0};

        while (!q.empty())
        {
            int diff = q.top().first;
            int row = q.top().second.first;
            int col = q.top().second.second;
            q.pop();

            if (row == n - 1 && col == m - 1)
            {
                return diff;
            }

            for (int i = 0; i < 4; i++)
            {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if (nrow >= 0 and ncol >= 0 and nrow < n and ncol < m)
                {
                    int temp = abs(heights[nrow][ncol] - heights[row][col]);
                    int newDiff = max(diff, temp);

                    if (newDiff < ans[nrow][ncol])
                    {
                        ans[nrow][ncol] = newDiff;
                        q.push({newDiff, {nrow, ncol}});
                    }
                }
            }
        }
        return 0;
    }
};
