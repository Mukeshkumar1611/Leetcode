class Solution {
public:
    int romanToInt(string str) {
        unordered_map<char, int> freq;
        freq['I'] = 1;
        freq['V'] = 5;
        freq['X'] = 10;
        freq['L'] = 50;
        freq['C'] = 100;
        freq['D'] = 500;
        freq['M'] = 1000;
        
        int ans = 0;
        
        for(int i = 0; i < str.size(); i++)
        {
            if(i < str.size() - 1 and freq[str[i]] < freq[str[i+1]])
            {
                ans = ans + (freq[str[i+1]] - freq[str[i]]);
                i++;
            }
            else
            {
                ans = ans + freq[str[i]];
            }
        }
        return ans;
    }
};
