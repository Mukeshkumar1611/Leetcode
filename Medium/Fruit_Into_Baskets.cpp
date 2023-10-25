class Solution {
public:
    int totalFruit(vector<int>& nums) {
        if(nums.size() <= 2)
        {
            return nums.size();
        }
        int n = nums.size();
        int i = 0;
        int j = 0;
        map<int, int> freq;
        int ans = 0;
        while(j < n)
        {
            freq[nums[j]]++;
            if(freq.size() <= 2)
            {
                ans = max(ans, j - i + 1);
            }
            else
            {
                while(freq.size() > 2)
                {
                    freq[nums[i]]--;
                    if(freq[nums[i]] == 0)
                    {
                        freq.erase(nums[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};
