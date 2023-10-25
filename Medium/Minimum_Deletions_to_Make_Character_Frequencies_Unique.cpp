class Solution {
public:
    int minDeletions(string s) 
    {
        unordered_map<char, int> freq;
        set<char> st;
        for(auto it : s)
        {
            freq[it]++;
        }

        int ans = 0;
        for(auto it : freq)
        {
            int currFreq = it.second;
            while(currFreq > 0 && st.find(currFreq) != st.end())
            {
                ans++;
                currFreq--;
            }
            st.insert(currFreq);
        }
        return ans;
    }
};
