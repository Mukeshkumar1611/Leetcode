class Solution
{
public:
    vector<string> splitWordsBySeparator(vector<string> &words, char separator)
    {
        vector<string> ans;
        for (auto it : words)
        {
            string str = it;
            string s1;
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == separator)
                {
                    if (s1.size() > 0)
                    {
                        ans.push_back(s1);
                        s1.clear();
                    }
                }
                else
                {
                    s1 += str[i];
                }
            }
            if (s1.size() > 0)
            {
                ans.push_back(s1);
                s1.clear();
            }
        }
        return ans;
    }
};
