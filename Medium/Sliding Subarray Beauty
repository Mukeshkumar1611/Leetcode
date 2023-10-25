class Solution
{
public:
    vector<int> getSubarrayBeauty(vector<int> &nums, int k, int x)
    {
        int n = nums.size();
        vector<int> ans;
        map<int, int> freq;
        int i = 0;
        int j = 0;

        while (j < n)
        {
            freq[nums[j]]++;
            if (j - i + 1 == k)
            {
                int c = 0;
                for (auto it : freq)
                {
                    if (c + it.second >= x)
                    {
                        if (it.first < 0)
                        {
                            ans.push_back(it.first);
                        }
                        else
                        {
                            ans.push_back(0);
                        }
                        break;
                    }
                    c += it.second;
                }
            }
            else if (j - i + 1 > k)
            {
                while (j - i + 1 > k)
                {
                    freq[nums[i]]--;
                    if (freq[nums[i]] == 0)
                    {
                        freq.erase(nums[i]);
                    }
                    i++;
                }
                if (j - i + 1 == k)
                {
                    int c = 0;
                    for (auto it : freq)
                    {
                        if (c + it.second >= x)
                        {
                            if (it.first < 0)
                            {
                                ans.push_back(it.first);
                            }
                            else
                            {
                                ans.push_back(0);
                            }
                            break;
                        }
                        c += it.second;
                    }
                }
            }
            j++;
        }
        return ans;
    }
};
