class Solution
{
public:
    int minSwaps(vector<int> &nums)
    {
        int ones = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
                ones++;
        }
        nums.insert(nums.end(), nums.begin(), nums.end());
        int k = ones;
        int i = 0;
        int j = 0;
        int mini = 1e9;
        unordered_map<int, int> freq;
        int n = nums.size();

        while (j < nums.size())
        {
            freq[nums[j]]++;
            if (j - i + 1 == k)
            {
                if (freq.count(0) == true)
                {
                    mini = min(mini, freq[0]);
                }
            }
            else if (j - i + 1 > k)
            {
                while (j - i + 1 > k)
                {
                    freq[nums[i]]--;
                    i++;
                }
                if (j - i + 1 == k)
                {
                    if (freq.count(0) == true)
                    {
                        mini = min(mini, freq[0]);
                    }
                }
            }
            j++;
        }
        if(mini == 1e9) return 0;
        return mini;
    }
};
