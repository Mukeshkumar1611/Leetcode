class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int i = 0;
        int j = 0;
        int ans = 0;

        while(j < nums.size())
        {
            if(nums[j] == 1)
            {
                ans = max(ans, j-i+1);
                j++;
            }
            else if(nums[j] == 0 and k > 0)
            {
                ans = max(ans, j-i+1);
                j++;
                k--;
            }
            else
            {
                if(nums[i]== 0)
                {
                    k++;
                }
                i++;
            }
        }
        return ans;
    }
};
