class Solution
{
public:
    int beautySum(string s)
    {
        int maxi = 0;
        int ans = 0;
        int mini = 500;
        for (int i = 0; i < s.size(); i++)
        {
            unordered_map<int, int> freq;
            for (int j = i; j < s.size(); j++)
            {
                freq[s[j]]++;
                for (auto it : freq)
                {
                    maxi = max(maxi, it.second);
                    mini = min(mini, it.second);
                }
                ans += (maxi - mini);
                maxi = 0;
                mini = 500;
            }
        }
        return ans;
    }
};
