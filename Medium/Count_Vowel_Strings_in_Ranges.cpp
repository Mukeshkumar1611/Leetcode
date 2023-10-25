class Solution {
private:
    bool isVowel(char ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return 1;
        return 0;
    }
    
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        int n = words.size();
        
        vector<int> pref(n, 0);
        int totalVowels = 0;
        
        for(int i = 0; i < n; i++)
        {
            string currStr = words[i];
            if(isVowel(currStr[0]) && isVowel(currStr[currStr.size() - 1]))
            {
                totalVowels++;
            }
            pref[i] = totalVowels;
        }
        
        for(auto it : pref)
        {
            cout << it << ' ';
        }
        
        for(int i = 0; i < queries.size(); i++)
        {
            int left = queries[i][0];
            int right = queries[i][1];
            
            int ele;
            if(left == 0)
                ele = pref[right];
            else
                ele = pref[right] - pref[left - 1];
            ans.push_back(ele);
        }
        
        return ans;
    }
};
