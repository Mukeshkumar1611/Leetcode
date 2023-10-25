class Solution
{
private:
    int helper(int i, int j, vector<int> &nums, int flag)
    {
        if (i > j)
            return 0;
        int ans = 0;
        if (flag)
        {
            ans = max((nums[i] + helper(i + 1, j, nums, 0)), (nums[j] + helper(i, j - 1, nums, 0)));
        }
        else
        {
            ans = min((-nums[i] + helper(i+1, j, nums, 1)), (-nums[j] + helper(i, j-1, nums, 1)));
        }
        return ans;
    }

public:
    bool PredictTheWinner(vector<int> &nums)
    {
        int n = nums.size();
        int score = helper(0, n - 1, nums, 1);
        if (score >= 0)
        {
            return true;
        }
        return false;
    }
};
