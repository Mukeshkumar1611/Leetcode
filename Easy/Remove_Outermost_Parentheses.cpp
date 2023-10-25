class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> s1;
        string ans = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                if(s1.size() > 0)
                {
                    ans = ans + s[i];
                }
                s1.push(s[i]);
            }
            else
            {
                s1.pop();
                if(s1.size() > 0)
                {
                    ans = ans + s[i];
                }
            }
        }
        return ans;
    }
};
