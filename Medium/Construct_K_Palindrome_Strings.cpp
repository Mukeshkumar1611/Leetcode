class Solution
{
public:
    bool canConstruct(string s, int k)
    {
        int n = s.size();
        if(n < k) return false;
        if (n == k)
            return true;

        unordered_map<char, int> freq;
        for (auto it : s)
        {
            freq[it]++;
        }
        int count = 0;
        for(auto it : freq)
        {
            if(it.second % 2)
            {
                count++;
            }
        }
        if(count > k) return false;
        return true;
    }
};
