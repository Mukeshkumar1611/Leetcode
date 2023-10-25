class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int row = accounts.size();
        int col = accounts[0].size();
        int max = INT_MIN;
        int num;
        for (int i = 0; i < row; i++)
        {
            int sum = 0;
            for (int j = 0; j < col; j++)
            {
                sum = sum + accounts[i][j];
            }
            if (max < sum)
            {
                max = sum;
            }
        }
        return max;
    }
};
