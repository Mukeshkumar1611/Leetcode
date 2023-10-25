class Solution {
public:
    string largestOddNumber(string nums) {
        int idx = -1;
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            int x = nums[i] + 48;
            if(x % 2 == 1)
            {
                idx = i;
                break;
            }
        }
        string ans = "";
        for(int i = 0; i <= idx; i++)
        {
            char ch = nums[i];
            ans.push_back(ch);
        }
        return ans;
    }
};
