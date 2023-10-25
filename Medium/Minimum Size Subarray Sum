class Solution 
{
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int ans =  INT_MAX;

        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            while(sum >= target)
            {
                ans = min(ans, i - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        if(ans == INT_MAX)
        {
            return 0;
        }
        return ans;
    }
};
