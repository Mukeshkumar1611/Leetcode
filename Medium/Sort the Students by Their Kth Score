class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int, int>> arr;
        
        for(int i = 0; i < score.size(); i++)
        {
            arr.push_back({score[i][k], i});
        }
        
        sort(arr.rbegin(), arr.rend());
        vector<vector<int>> mk;
        for(auto it : arr)
        {
            mk.push_back(score[it.second]);
        }
        return mk;
    }
};
