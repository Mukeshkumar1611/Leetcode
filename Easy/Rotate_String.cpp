class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
        {
            return false;
        }
        int l = s.size();
        int k = s.size();
        while(k--)
        {
            s.insert(s.begin(), s[l-1]);
            s.erase(s.begin() + (l));
            if(s == goal) return true;
        }
        return false;
    }
};
