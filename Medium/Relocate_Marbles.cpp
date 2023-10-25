class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        set<int> s1(nums.begin(), nums.end());
        for(int i = 0; i < moveTo.size(); i++)
        {
            s1.erase(moveFrom[i]);
            s1.insert(moveTo[i]);
        }
        
        vector<int> ans;
        for(auto it : s1)
        {
            ans.push_back(it);
        }
        return ans;
    }
};
