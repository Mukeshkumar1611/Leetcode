class Solution
{
public:
    string makeGood(string s)
    {
        stack<int> st;

        for (int i = 0; i < s.size(); i++)
        {
            if (!st.empty() and (s[i] == st.top() + 32 or s[i] == st.top() - 32))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        string ans = "";
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
