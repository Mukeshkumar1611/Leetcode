class Solution {
private:
    int helper(int start, int end, string s, int k)
    {
        if(end < k) return 0;
        map<int, int> freq;
        for(int i = start; i < end; i++)
        {
            freq[s[i]]++;
        }
        for(int mid = start; mid < end; mid++)
        {
            if(freq[s[mid]] >= k) continue;     
            int nextMid = mid + 1;
            while(nextMid < end && freq[s[nextMid]] < k)
            {
                nextMid++;
            }
            return max(helper(start, mid, s, k), helper(nextMid, end, s, k));
        }
        return (end - start);
    }

public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        return helper(0, n, s, k);
    }
};
