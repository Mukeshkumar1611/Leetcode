class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        if(mat.size() == 1)
        {
            return mat[0][0];
        }
        for(int i = 0; i < mat.size(); i++)
        {
            sum = sum + mat[i][i];
        }
        int k = 0;
        for(int i = mat[0].size() - 1; i >= 0; i--)
        {
            sum = sum + mat[k++][i];
        }

        if(mat.size() % 2 and mat.size() > 1)
        {
            sum = sum - mat[mat.size()/2][mat.size()/2];
        }
        return sum;
    }
};
