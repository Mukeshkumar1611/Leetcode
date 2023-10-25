class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n1 = str1.size();
        int n2 = str2.size();
        
        int i = 0;
        int j = 0;
        
        while(i < n1 && j < n2)
        {
            if(str1[i] == str2[j])
            {
                i++;
                j++;
            }
            else if(str1[i] != str2[j])
            {
                if(str1[i] == 'z')
                {
                    str1[i] = 'a';
                }
                else
                {
                    str1[i]++;
                }
                if(str1[i] == str2[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    i++;
                }
            }
        }
        if(j == n2)
        {
            return 1;
        }
        return 0;
    }
};
