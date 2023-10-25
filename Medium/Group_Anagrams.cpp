class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, vector<string>> freq;

        for(auto i : strs)
        {
            string s = i;
            sort(s.begin(), s.end());
            freq[s].push_back(i);
        }

        for(auto itr : freq)
        {
            ans.push_back(itr.second);
        }
        return ans;
    }
};
