class Solution
{
public:
    int equalSubstring(string s, string t, int maxCost)
    {
        int n = s.size();
        int i = 0;
        int j = 0;
        int currCost = 0;
        int maxLength = 0;

        while (j < n)
        {
            int cost = abs(s[j] - t[j]);
            currCost += cost;
            if (currCost <= maxCost)
            {
                maxLength = max(maxLength, j - i + 1);
            }
            else
            {
                while (currCost > maxCost)
                {
                    currCost = currCost - abs(s[i] - t[i]);
                    i++;
                    if (currCost <= maxCost)
                    {
                        maxLength = max(maxLength, j - i + 1);
                    }
                }
            }
            j++;
        }
        return maxLength;
    }
};
