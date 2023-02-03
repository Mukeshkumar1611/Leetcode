class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> s1;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == '(' or ch == '[' or ch == '{')
            {
                s1.push(ch);
            }
            else
            {
                if (s1.empty())
                {
                    return false;
                }
                char top = s1.top();
                if ((top == '{' and ch == '}') or (top == '[' and ch == ']') or (top == '(' and ch == ')'))
                {
                    s1.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (s1.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
