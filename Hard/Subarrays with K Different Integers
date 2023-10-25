class Solution {
private:
    int helper(vector<int>&s, int k)
    {
        int i = 0;
        int j = 0;
        unordered_map<int, int> freq;
        int ans = 0;
        
        while(j < s.size())
        {
            freq[s[j]]++;
            while(freq.size() > k)
            {
                freq[s[i]]--;
                if(freq[s[i]] == 0)
                {
                    freq.erase(s[i]);
                }
                i++;
            }
            ans = ans + j - i + 1;
            j++;
        }
        return ans;
    }

public:
    int subarraysWithKDistinct(vector<int>& s, int k) {
        return helper(s, k) - helper(s, k-1);
    }
};
