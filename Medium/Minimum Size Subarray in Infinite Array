class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = INT_MAX;
        
        n = n * 2;
        long long int totalSum = 0;
        for(auto it : nums)
        {
            totalSum += it;
        }
        
        if(totalSum < target)
        {
            n = n * 100;
        }
        
        int i = 0;
        int j = 0;
        
        long long int sum = 0;
        
        while(j < n)
        {
            sum = sum + nums[j % nums.size()];
            if(sum == target)
            {
                ans = min(ans, j - i + 1);
            }
            
            while(sum >= target)
            {
                sum = sum - nums[i % nums.size()];
                i++;
                if(sum == target)
                {
                    ans = min(ans, j - i + 1);
                }
            }
            j++;
        }
        if(ans != INT_MAX) return ans;
        return -1;
    }
};
