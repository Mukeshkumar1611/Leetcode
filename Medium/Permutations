class Solution {
public:

    void helper(int idx, vector<vector<int>>& ans, vector<int>&nums)
    {
        if(idx == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i = idx; i < nums.size(); i++)
        {
            swap(nums[i], nums[idx]);
            helper(idx + 1, ans, nums);
            swap(nums[i], nums[idx]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int idx = 0;
        helper(idx, ans, nums);
        return ans;
    }
};
