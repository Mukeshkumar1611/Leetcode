class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int maxOnes = 0;
        int ones = 0;
        int flag = 0;

        while (j < n)
        {
            if (nums[j] == 1)
            {
                ones++;
                j++;
            }
            else if (nums[j] == 0 && flag == 1)
            {
                if (nums[i] == 1)
                {
                    i++;
                    ones--;
                }
                else if (nums[i] == 0)
                {
                    i++;
                    flag = 0;
                    ones--;
                }
            }
            else
            {
                ones++;
                flag = 1;
                j++;
            }
            maxOnes = max(maxOnes, ones);
        }
        return maxOnes - 1;
    }
};
