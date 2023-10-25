class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n = cards.size();
        
        int i = 0;
        int j = 0;
        map<int, int> freq;
        int ans = 1e9;
        
        while(j < n)
        {
            freq[cards[j]]++;
            if(freq[cards[j]] == 2)
            {
                ans = min(ans, j - i + 1);
            }
            while(i < j && freq[cards[j]] >= 2)
            {
                ans = min(ans, j - i + 1);
                freq[cards[i]]--;
                if(freq[cards[i]] == 0)
                {
                    freq.erase(cards[i]);
                }
                i++;
            }
            j++;
        }
        if(ans == 1e9) return -1;
        return ans;
    }
};
