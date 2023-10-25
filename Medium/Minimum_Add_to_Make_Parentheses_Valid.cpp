class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int open = 0;
        int close = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                open++;
            }
            else if(s[i] == ')' && open >= 1)
            {
                open--;
            }
            else if(s[i] == ')')
            {
                close++;
            }
        }
        return (open + close);
    }
};
