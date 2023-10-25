class Solution
{
private:
    int countSubArrays(vector<int> &nums, int k)
    {
        int ans = 0;
        map<int, int> freq;
        int i = 0;
        int j = 0;
        
        while(j < nums.size())
        {
            freq[nums[j]]++;
            if(freq.size() <= k)
            {
                ans += (j - i + 1);
            }
            else
            {
                while(i < nums.size() && freq.size() > k)
                {
                    freq[nums[i]]--;
                    if(freq[nums[i]]==0)
                    {
                        freq.erase(nums[i]);
                    }
                    i++;
                }
                ans += (j - i + 1);
            }
            j++;
        }
        return ans;
    }
public:
    int countCompleteSubarrays(vector<int> &nums)
    {
        int n = nums.size();
        set<int> s1;
        int ans = 0;
        for (auto it : nums)
        {
            s1.insert(it);
        }
        int distCount = s1.size();
        return (countSubArrays(nums, distCount) - countSubArrays(nums, distCount - 1));
    }
};
