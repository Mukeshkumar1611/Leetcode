class Solution
{
public:
    int minSteps(string s, string t)
    {
        int total = s.size() + t.size();
        map<int, int> freq;
        for (auto it : s)
        {
            freq[it]++;
        }
        int count = 0;

        for (int i = 0; i < t.size(); i++)
        {
            if (freq.find(t[i]) == freq.end())
            {
                count++;
            }
            else
            {
                freq[t[i]]--;
                if(freq[t[i]] == 0)
                {
                    freq.erase(t[i]);
                }
            }
        }

        int count2 = 0;
        map<int, int> freq2;
        for (auto it : t)
        {
            freq2[it]++;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (freq2.find(s[i]) == freq2.end())
            {
                count2++;
            }
            else
            {
                freq2[s[i]]--;
                if(freq2[s[i]] == 0)
                {
                    freq2.erase(s[i]);
                }
            }
        }

        return count + count2;
    }
};
