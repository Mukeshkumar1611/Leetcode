class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        stack<char> stk;
        for (int i = 0; i < num.size(); i++)
        {
            while (!stk.empty() and num[i] < stk.top() and k > 0)
            {
                stk.pop();
                k--;
            }
            if (!stk.empty() or num[i] != '0')
            {
                stk.push(num[i]);
            }
        }
        while(!stk.empty() && k--)
        {
            stk.pop();
        }
        if(stk.empty())
        {
            return "0";
        }
        string ans = "";
        while (!stk.empty())
        {
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
