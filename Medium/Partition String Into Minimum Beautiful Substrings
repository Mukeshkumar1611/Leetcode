class Solution
{
private:
    bool isPower(long long int res)
    {
        while(res>1)
        {
            if(res%5==0)
            {
                res=res/5;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }

    bool isBeauty(int start, int end, int n, string s)
    {
        if (s[start] == '0')
        {
            return false;
        }
        long long int decimal = 0;
        long long int power = 1;

        for (int i = end; i >= start; --i)
        {
            if (s[i] == '1')
            {
                decimal += power;
            }
            power *= 2;
        }
        if (isPower(decimal))
        {
            return true;
        }
        return false;
    }

    int helper(int idx, int n, string &s)
    {
        if (idx >= n)
        {
            return 0;
        }
        int mini = INT_MAX - 1;
        for (int i = idx; i < n; i++)
        {
            if (isBeauty(idx, i, n, s))
            {
                mini = min(mini, 1 + helper(i + 1, n, s));
            }
        }
        return mini;
    }

public:
    int minimumBeautifulSubstrings(string s)
    {
        int n = s.size();
        int ans = helper(0, n, s);
        if(ans == INT_MAX - 1)
        {
            return -1;
        }
        return ans;
    }
};
