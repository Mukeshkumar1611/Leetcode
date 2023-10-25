class Solution {
public:
    string reverseWords(string s) { 
        // code here
        vector<string> v1;
        string temp = "";
        string ans = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' ')
            {
                temp += s[i];
            }
            if((s[i] == ' ' and temp != "") or (i == s.size() - 1 
            and s[i] != ' '))
            {
                v1.push_back(temp);
                temp = "";
            }
        }
        
        for(int i = v1.size() - 1; i >= 0; i--)
        {
            if(i == v1.size() - 1)
            {
                ans += v1[i];
            }
            else 
            {
                ans  += ' ' + v1[i];
            }
        }
        return ans;
    } 
};
