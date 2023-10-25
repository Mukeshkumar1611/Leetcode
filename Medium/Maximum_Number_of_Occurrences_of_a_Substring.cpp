class Solution
{
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize)
    {
        int i = 0;
        int j = 0;
        int n = s.size();
        map<char, int> freq;
        map<string, int> ans;
        while (j < n)
        {
            freq[s[j]]++;
            if (j - i + 1 >= minSize and j - i + 1 <= maxSize)
            {
                if (freq.size() <= maxLetters)
                {
                    string ab = s.substr(i, (j - i + 1));
                    ans[ab]++;
                    freq[s[i]]--;
                    if (freq[s[i]] == 0)
                    {
                        freq.erase(s[i]);
                    }
                    i++;
                }
                else
                {
                    freq[s[i]]--;
                    if (freq[s[i]] == 0)
                    {
                        freq.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
            else if (j - i + 1 < minSize)
            {
                j++;
            }
            else if (j - i + 1 > maxSize)
            {
                freq[s[i]]--;
                if (freq[s[i]] == 0)
                {
                    freq.erase(s[i]);
                }
                i++;
            }
        }
        int maxi = 0;
        for (auto it : ans)
        {
            maxi = max(maxi, it.second);
        }
        return maxi;
    }
};
