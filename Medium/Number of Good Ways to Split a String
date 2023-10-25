class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        int ans = 0;
        
        map<char, int> mp1;
        map<char, int> mp2;

        for(auto it : s)
        {
            mp2[it]++;
        }

        for(int i = 0; i < n; i++)
        {
            mp1[s[i]]++;

            mp2[s[i]]--;
            if(mp2[s[i]] == 0)
            {
                mp2.erase(s[i]);
            }

            if(mp1.size() == mp2.size())
            {
                ans++;
            }
        }
        return ans; 
    }
};
