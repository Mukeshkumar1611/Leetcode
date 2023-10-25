class Solution {
public:
    
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int mini = 1e9;
        
        vector<int> PreMin(n, 0);
        PreMin[0] = nums[0];
        for(int i = 1; i < n; i++)
        {
            PreMin[i] = min(PreMin[i - 1], nums[i]);
        }
        
        vector<int> suffMin(n, 0);
        
        suffMin[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--)
        {
            suffMin[i] = min(suffMin[i + 1], nums[i]);
        }

        
        int ans = 1e9;
        
        for(int i = 0; i < n; i++)
        {
            if(PreMin[i] < nums[i] && nums[i] > suffMin[i])
            {
                ans = min(ans, nums[i] + PreMin[i] + suffMin[i]);
            }
        }
        if(ans >= 1e9) return -1;
        return ans;
    }
};
