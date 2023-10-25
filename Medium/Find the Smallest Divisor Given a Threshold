class Solution
{
private:
    int mini(vector<int> &nums)
    {
        int mini = 1e9;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < mini)
                mini = nums[i];
        }
        return mini;
    }

    int helper(vector<int> &nums, int threshold, int mid)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            if (nums[i] % mid == 0)
            {
                a = nums[i] / mid;
            }
            else
            {
                a = (nums[i] / mid) + 1;
            }
            sum = sum + a;
        }
        return sum;
    }

public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int start = 1;
        int end = *max_element(nums.begin(), nums.end());
        int ans;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            int sum = helper(nums, threshold, mid);

            if (sum <= threshold)
            {
                ans = mid;
                end = mid - 1;
            }
            else if(sum > threshold)
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
