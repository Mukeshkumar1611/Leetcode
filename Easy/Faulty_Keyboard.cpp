class Solution {
public:
    string finalString(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'i')
            {
                string temp = ans;
                reverse(temp.begin(), temp.end());
                ans = temp;
            }
            else
            {
                ans = ans + s[i];
            }
        }
        return ans;
    }
};
