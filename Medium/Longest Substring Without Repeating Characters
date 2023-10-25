class Solution
{
public:
    int lengthOfLongestSubstring(string str)
    {
        int n = str.size();
        int i = 0;
        int j = 0;
        set<char> s1;
        int ans = 0;
        while (j < n)
        {
            if (s1.find(str[j]) != s1.end())
            {
                s1.erase(str[i]);
                i++;
            }
            else
            {
                s1.insert(str[j]);
                ans = max(ans, j - i + 1);
                j++;
            }
        }
        return ans;
    }
};
