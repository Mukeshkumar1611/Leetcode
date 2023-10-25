class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> freq;

        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    freq.push_back({i, j});
                }
            }
        }

        vector<vector<int>> ans = matrix;

        for(auto itr : freq)
        {
            for(int j = 0; j < col; j++)
            {
                ans[itr.first][j] = 0;
            }

            for(int i = 0; i < row; i++)
            {
                ans[i][itr.second] = 0;
            }
        }

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                matrix[i][j] = ans[i][j];
            }
        }
    }
};
