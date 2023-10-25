class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int>ans(n + 1);
        int k = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'I')
            {
                ans[i] = k++;
            }
        }
        ans[n] = k++;
        k = n;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'D')
            {
                ans[i] = k--;
            }
        }
        return ans;
    }
};
