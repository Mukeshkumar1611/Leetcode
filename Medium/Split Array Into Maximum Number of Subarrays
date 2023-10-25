class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int n = nums.size();
        
        int totalAnd = nums[0];
        for(auto it : nums)
        {
            totalAnd = (totalAnd & it);
        }
        
        if(totalAnd != 0) return 1;
        
        totalAnd = INT_MAX;
        int ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            totalAnd = (totalAnd & nums[i]);
            if(totalAnd == 0)
            {
                ans++;
                totalAnd = INT_MAX;
            }
        }
        
        return ans;        
    }
};
