class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (true)
        {
            int idx = s.find(part);
            if(idx != string :: npos) // npos :: No Position
            {
                s.erase(idx, part.size());
            }
            else
            {
                break;
            }
        }
        return s;
    }
};
