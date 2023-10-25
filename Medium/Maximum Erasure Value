class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        int n = nums.size();
        set<int> s1;
        int i = 0;
        int j = 0;
        int ans = 0;
        int sum = 0;

        while (j < n)
        {
            while(s1.find(nums[j]) != s1.end())
            {
                sum = sum - nums[i];
                s1.erase(nums[i]);
                i++;
            }
                          sum = sum + nums[j];
                s1.insert(nums[j]);
            
            ans = max(ans, sum);
            j++;
        }
        return ans;
    }
};
