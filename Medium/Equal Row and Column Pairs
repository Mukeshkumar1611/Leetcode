class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        set<vector<int>> s1;
        map<vector<int>, int> freq;
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            freq[grid[i]]++;
        }
        int i = 0;
        while (i < grid.size())
        {
            vector<int> v1;
            for (int j = 0; j < grid.size(); j++)
            {
                v1.push_back(grid[j][i]);
            }
            if (freq.find(v1) != freq.end())
            {
                count += freq[v1];
            }
            i++;
        }
        return count;
    }
};
