class Solution {
private:
    bool isVowel(char a)
    {
        if(a == 'a' or a == 'e' or a == 'i' or a == 'u' or a == 'o' or a == 'A' or a == 'E' or a == 'I' or a == 'U' or a == 'O')
        {
            return true;
        }
        return false;
    }
    
public:
    string sortVowels(string s) {
        vector<char> strs;
        for(int i = 0; i < s.size(); i++)
        {
            if(isVowel(s[i]))
            {
                strs.push_back(s[i]);
            }
        }
        
        sort(strs.begin(), strs.end());
        for(auto it : strs)
        {
            cout << it;
        }
        string ans = "";
        int k = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(isVowel(s[i]))
            {
                ans.push_back(strs[k++]);
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
