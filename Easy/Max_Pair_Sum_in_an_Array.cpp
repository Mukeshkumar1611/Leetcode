class Solution {
private:
    int bigDigit(int n)
    {
        int big = 0;
        while(n > 0)
        {
            int rem = n % 10;
            big = max(big, rem);
            n = n / 10;
        }
        return big;
    }
    
public:
    int maxSum(vector<int>& nums) {
        int maxi = -1e9;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(bigDigit(nums[i]) == bigDigit(nums[j]) )
                {
                    maxi = max(maxi, nums[i]+nums[j]); 
                }
            }
        }
        if(maxi == -1e9) return -1;
        return maxi;
    }
};
