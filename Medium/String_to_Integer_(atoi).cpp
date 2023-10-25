class Solution {
public:

    int helper(string s, int i, int sign, long ans)
    {
        if(sign * ans >= INT_MAX)
        {
            return INT_MAX;
        }
        if(sign * ans <= INT_MIN)
        {
            return INT_MIN;
        }
        if(i >= s.size() or s[i] < '0' or s[i] > '9')
        {
            return sign * ans;
        }
        return helper(s, i+1, sign, (ans * 10) + (s[i] - '0'));
    }

    int myAtoi(string s) 
    {
        int sign = 1;
        int i = 0;
        while(i < s.size() and s[i] == ' ')
        {
            ++i;
        }
        if(s[i] == '-')
        {
            sign = -1;
            ++i;
        }
        else if(s[i] == '+')
        {
            sign = 1;
            ++i;
        }
        return helper(s, i,sign , 0);
    }
};
