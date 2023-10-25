class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int>&nums, int k)
    {
        int n = nums.size();
        int i = 0;
        int j = 0;
        long long count = 1;
        int ans = 0;
        while(i < n && j < n)
        {
            count *= nums[j];
            if(count < k)
            {
                ans += (j - i + 1);
            }
            else if(count >= k)
            {
                while(count >= k && i < n)
                {
                    count = count/nums[i];
                    i++;
                }
                if(count < k)
                {
                    ans += (j - i + 1);
                }
            }
            j++;
        }
        return ans;
    }
};
