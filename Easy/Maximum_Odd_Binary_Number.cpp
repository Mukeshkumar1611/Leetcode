class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int count1s = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                count1s++;
            }
        }
        vector<char> v1(n);
        v1[n - 1] = '1';
        
        for(int i =0; i < count1s - 1; i++)
        {
            v1[i] = '1';
        }
        
        for(int i = count1s - 1; i < n - 1; i++)
        {
            v1[i] = '0';
        }
        
        string ans = "";
        for(auto it : v1)
        {
            ans.push_back(it);
        }
        return ans;
    }
};
