class Solution 
{
public:
    int minSizeSubarray(vector<int>& nums, int target) 
    {
        int n = nums.size();
        long long int total_sum = 0;
        for(int i = 0; i < n; i++)
        {
            total_sum += nums[i];
        }
        
        int ans = 0;
        if(total_sum < target)
        {
            ans = (nums.size() * (target / total_sum));
            target = target % total_sum;
        }
        
        n = n * 2;
        int i = 0;
        int j = 0;
        bool flag = 0;
        int temp = 1e9;
        long long int currSum = 0;
        
        while(j < n)
        {
            currSum = currSum + nums[j % nums.size()];
            if(currSum == target)
            {
                flag = 1;
                temp = min(temp, j - i + 1);
            }
            while(currSum >= target)
            {
                currSum = currSum - nums[i % nums.size()];
                i++;
                if(currSum == target)
                {
                    flag = 1;
                    temp = min(temp, j - i + 1);
                }
            }
            j++;
        }
        if(temp == 1e9 || !flag) return -1;
        return ans + temp;
    }
};