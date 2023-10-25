class Solution {
public:
    int minCost(string colors, vector<int>& nums) {
        int n = colors.size();
        int currSum = nums[0];
        int maxi = nums[0];
        int ans = 0;

        for(int i = 1; i < n; i++)
        {
            if(colors[i] == colors[i-1])
            {
                currSum += nums[i];
                maxi = max(maxi, nums[i]);
            }
            else
            {
                ans += (currSum - maxi);
                currSum = nums[i];
                maxi = nums[i];
            }
        }
        ans += (currSum - maxi);
        return ans;
    }
};
