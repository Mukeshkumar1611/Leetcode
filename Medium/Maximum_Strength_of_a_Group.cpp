class Solution {
private:
    void helper(int idx, long long &maxi, vector<int>&nums, int count, long long pro)
    {
        if(idx >= nums.size())
        {
            if(count >= 1)
            {
                maxi = max(maxi, pro);
            }
            return;
        }
        helper(idx + 1, maxi, nums, count + 1, pro * nums[idx]);
        helper(idx + 1, maxi, nums, count, pro);
    }

public:
    long long maxStrength(vector<int>& nums) {
        long long maxi = INT_MIN;
        helper(0, maxi, nums, 0, 1);
        return maxi;
    }
};
