class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k = p.size();
        int i = 0;
        int j = 0;
        int n = s.size();
        map<char, int> freq;
        for(auto it : p)
        {
            freq[it]++;
        }
        vector<int> ans;
        map<char, int> check;
        while(j < n)
        {
            check[s[j]]++;
            if(j - i + 1 == k)
            {
                if(freq == check)
                {
                    ans.push_back(i);
                }
                check[s[i]]--;
                if(check[s[i]]==0)
                {
                    check.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
