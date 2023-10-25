class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = k - 1;
        int ans = 1e9;
        while(j < nums.size())
        {
            ans = min(ans, nums[j] - nums[i]);
            i++;
            j++;
        }
        return ans;
    }
};
