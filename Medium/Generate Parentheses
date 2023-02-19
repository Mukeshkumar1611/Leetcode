class Solution {
public:

    void helper(vector<string> &ans, string str, int open, int close, int n)
    {
        if(str.size() == n * 2)
        {
            ans.push_back(str);
            return;
        }
        if(open < n)
        {
            helper(ans, str + '(', open + 1, close, n);
        }
        if(close < open)
        {
            helper(ans, str + ')', open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str = "";
        helper(ans, str, 0, 0, n);
        return ans;
    }
};
