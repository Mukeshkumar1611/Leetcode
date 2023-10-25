class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum  = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int x = nums[i];
            if(x < 10)
            {
                ans += x;
                
            }
            else
            {
                while(x != 0)
                {
                    int rem = x % 10;
                    ans += rem;
                    x = x / 10;
                }
            }
        }
        
        return abs(sum - ans);
    }
};
