class Solution {
public:
    bool checkIfPangram(string str) {
        int arr[26] = {0};
        for(int i = 0; i < str.size(); i++)
        {
            arr[str[i] - 'a'] = 1;
        }

        for(int i = 0; i < 26; i++)
        {
            if(arr[i] == 0) return false;
        }
        return true;
    }
};
