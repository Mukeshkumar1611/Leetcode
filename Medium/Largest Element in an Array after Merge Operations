class Solution {
public:
    long long maxArrayValue(vector<int>& ans) {
        int n = ans.size();
        vector<long long> nums(n);
        for(int i = 0; i < n; i++)
        {
            nums[i] = ans[i];
        }
        for(int i = n-1; i>=1; i--)
        {
            if(nums[i] >= nums[i-1])
            {
                nums[i-1] = nums[i] + nums[i-1];
                nums[i] = -1;
            }
        }
        long long ansi = *max_element(nums.begin(), nums.end());
        return ansi;
    }
};
