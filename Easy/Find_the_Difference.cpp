class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> freq;
        for(auto it : s)
        {
            freq[it]++;
        }

        for(auto it : t)
        {
            freq[it]--;
            if(freq[it] == 0)
            {
                freq.erase(it);
            }
        }
        
        for(auto it : freq)
        {
            return it.first;
        }
        return 'a';
    }
};
