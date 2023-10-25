class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum  = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 0 and nums[i] % 3 == 0)
            {
                count++;
                sum = sum + nums[i];
            }
        }
        if(count == 0) return 0;
        int ans = sum/count;
        return ans;
    }
};
