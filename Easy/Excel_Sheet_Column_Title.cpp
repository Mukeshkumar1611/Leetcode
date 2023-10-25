class Solution {
public:
    string convertToTitle(int cn) {
        string ans = "";

        while(cn)
        {
            cn--;
            ans = ans + char(cn % 26 + 65);
            cn = cn/26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
