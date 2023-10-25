class Solution {
public:
    int countWays(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());       
        
        int ans = 0;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            int selected = i + 1;
            if(nums[i] < selected && selected < nums[i + 1])
            {
                ans++;
            }
        }
        if(nums[0] > 0) ans++;
        if(nums[n - 1] < n) ans++;
        return ans;
    }
};
