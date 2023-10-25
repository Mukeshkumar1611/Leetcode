
class Solution
{
public:
    long long continuousSubarrays(vector<int> &nums)
    {
        int n = nums.size();
        long long ans = 0;
        int i = 0;
        int j = 0;
        multiset<int> ms;

        while (j < n)
        {
            ms.insert(nums[j]);
            while (ms.size() > 1 && *ms.rbegin() - *ms.begin() > 2)
            {
                ms.erase(ms.find(nums[i]));
                i++;
            }
            ans += (j - i + 1);
            j++;
        }
        return ans;
    }
};
