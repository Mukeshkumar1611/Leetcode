class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int row_st = 0;
        int row_end = n - 1;
        int col_st = 0;
        int col_end = n - 1;
        int k = 1;
        int arr[n][n];
        while (k <= (n * n))
        {
            for (int i = col_st; i <= col_end; i++)
            {
                arr[row_st][i] = k++;
            }
            row_st = row_st + 1;

            for (int i = row_st; i <= row_end; i++)
            {
                arr[i][col_end] = k++;
            }
            col_end--;

            for (int i = col_end; i >= col_st; i--)
            {
                arr[row_end][i] = k++;
            }
            row_end--;
            
            for (int i = row_end; i >= row_st; i--)
            {
                arr[i][col_st] = k++;
            }
            col_st++;
        }
        vector<vector<int>> mk;
        for (int i = 0; i < n; i++)
        {
            vector<int> v;
            for (int j = 0; j < n; j++)
            {
                v.push_back(arr[i][j]);
            }
            mk.push_back(v);
        }
        return mk;
    }
};
