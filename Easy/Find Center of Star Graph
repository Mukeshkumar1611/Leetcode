class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, set<int>> mp;
        for(auto it : edges)
        {
            mp[it[0]].insert(it[1]);
            mp[it[1]].insert(it[0]);
        }

        for(auto it : mp)
        {
            set<int> s1 = it.second;
            if(s1.size() > 1)
            {
                return it.first;
            }
        }
        return -1;
    }
};
