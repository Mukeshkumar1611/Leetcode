class Solution
{
public:
    int compress(vector<char> &chars)
    {
        if (chars.size() == 0)
            return 0;
        string ans;
        char ch = chars[0];
        int count = 1;
        for (int i = 1; i <= chars.size(); i++)
        {
            if (i < chars.size() and chars[i] == ch)
            {
                count++;
            }
            else
            {
                ans.push_back(ch);
                if (count > 1)
                {
                    string ab = to_string(count);
                    for (char it : ab)
                    {
                        ans.push_back(it);
                    }
                }
                if (i < chars.size())
                {
                    ch = chars[i];
                }
                else
                {
                    ch = 0;
                }
                count = 1;
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            chars[i] = ans[i];
        }
        return ans.size();
    }
};
