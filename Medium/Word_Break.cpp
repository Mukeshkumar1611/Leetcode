class Solution {
private:
    bool helper(int idx, string &s, unordered_map<string, int> &freq, vector<int> &dp)
    {
        if(idx >= s.size()) return 1;
        if(dp[idx] != -1) return dp[idx];
        bool ans = false;
        string temp = "";

        for(int i = idx; i < s.size(); i++)
        {
            temp += s[i];
            if(freq[temp])
            {
                ans = ans | helper(i + 1, s, freq, dp);
            }
        }
        return dp[idx] = ans;
    }

public:
    bool wordBreak(string s, vector<string>& words) {
        unordered_map<string, int> freq;
        vector<int> dp(s.size(), -1);

        for(auto it : words)
        {
            freq[it]++;
        }
        return helper(0, s, freq, dp);
    }
};
