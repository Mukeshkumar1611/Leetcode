class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char lastGreatest = 'z';
        char ans = letters[0];
        for(int i = 0; i < letters.size(); i++)
        {
            if(letters[i] > target and letters[i] <= lastGreatest)
            {
                ans = letters[i];
                lastGreatest = letters[i];
            }
        }
        return ans;
    }
};
