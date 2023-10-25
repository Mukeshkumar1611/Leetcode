class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        unordered_map<char, int> freq;
        for(int i = 0; i < chars.size(); i++)
        {
            freq.insert(make_pair(chars[i], vals[i]));
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(freq.count(s[i]) == false)
            {
                freq[s[i]] = s[i] - 'a' + 1;
            }
        }

        int currVal = 0;
        int maxVal =  0;
        for(int i = 0; i < s.size(); i++)
        {
            int val = freq[s[i]];
            
            if(currVal >= 0)
            {
                currVal += val;
            }
            else
            {
                currVal = val;
            }
            if(currVal > maxVal)
            {
                maxVal = currVal;
            }
        }
        return maxVal;
    }
};
