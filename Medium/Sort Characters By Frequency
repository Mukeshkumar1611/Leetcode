class Solution
{
public:
    string frequencySort(string s)
    {
        vector<pair<int, char>> v1;
        unordered_map<char, int> freq;

        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i]]++;
        }

        for (auto it : freq)
        {
            v1.push_back({it.second, it.first});
        }
        sort(v1.rbegin(), v1.rend());
        string ans;
        
        for (auto it : v1)
        {
            for (int i = 0; i < it.first; i++)
            {
                ans+= it.second;
            }
        }
        return ans;
    }
};
