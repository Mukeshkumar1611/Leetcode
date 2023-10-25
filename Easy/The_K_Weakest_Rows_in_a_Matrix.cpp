class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> v1;
        for(int i = 0; i < mat.size(); i++)
        {
            int count = 0;
            for(int j = 0; j < mat[0].size(); j++)
            {
                if(mat[i][j] == 1) count++;
            }
            v1.push_back({count, i});
        }
        sort(v1.begin(), v1.end());
        int size = v1.size() - k;
        while(size--)
        {
            v1.pop_back();
        }
        vector<int> ans;
        for(int i = 0; i < v1.size(); i++)
        {
            ans.push_back(v1[i].second);
        }
        return ans;
    }
};
