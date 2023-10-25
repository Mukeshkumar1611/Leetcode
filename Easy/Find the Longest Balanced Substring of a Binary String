class Solution
{
public:
    int findTheLongestBalancedSubstring(string s)
    {
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                int zero = 0;
                int one = 0;
                while (i < n and s[i] == '0')
                {
                    i++;
                    zero++;
                }
                while (i < n and s[i] == '1')
                {
                    i++;
                    one++;
                }
                --i;
                int len = min(zero, one);
                ans = max(ans, 2 * len);
            }
        }
        return ans;
    }
};
