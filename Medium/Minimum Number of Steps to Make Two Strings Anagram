class Solution {
public:
    int minSteps(string s, string t) {
        int count = 0;
        map<int, int> freq;
        for(auto it : s)
        {
            freq[it]++;
        }

        for(int i =0 ; i < t.size(); i++)
        {
            if(freq.find(t[i]) == freq.end())
            {
                count++;
            }
            else
            {
                freq[t[i]]--;
                if(freq[t[i]] == 0)
                {
                    freq.erase(t[i]);
                }
            }
        }
        return count;
    }
};
