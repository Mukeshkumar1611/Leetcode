class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open;
        stack<int> star;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                open.push(i);
            }
            else if(s[i] == '*')
            {
                star.push(i);
            }
            else
            {
                if(!open.empty())
                {
                    open.pop();
                }
                else if(!star.empty())
                {
                    star.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        while(!open.empty())
        {
            if(star.empty()) return false;
            else if(open.top() < star.top())
            {
                star.pop();
                open.pop();
            }
            else return false;
        }
        return true;
    }
};
