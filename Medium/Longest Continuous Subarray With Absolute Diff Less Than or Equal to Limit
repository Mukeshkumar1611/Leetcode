class Solution
{
public:
    int longestSubarray(vector<int> &nums, int limit)
    {
        multiset<int> ms;
        int i = 0;
        int j = 0;
        int n = nums.size();
        int ans = 0;
        while (j < n)
        {
            ms.insert(nums[j]);
            int mini = *(ms.begin());
            int maxi = *(ms.rbegin());
            int l = maxi - mini;
            if (l <= limit)
            {
                ans = max(ans, j - i + 1);
            }
            else
            {
                while (ms.size() > 0 && l > limit)
                {
                    auto it = ms.find(nums[i]);
                    ms.erase(it);
                    int mini = *ms.begin();
                    int maxi = *ms.rbegin();
                    l = maxi - mini;
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};
