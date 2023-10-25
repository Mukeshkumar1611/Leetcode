class Solution {
private:
    int countPairs(vector<int> &nums, int k)
    {
        int count = 0;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(abs(nums[i] - nums[i+1]) <= k)
            {
                i++;
                count++;
            }
        }
        return count;
    }

public:
    int minimizeMax(vector<int>& nums, int p) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums[n-1] -  nums[0];

        while(start < end)
        {
            int mid = (start + end) / 2;
            if(countPairs(nums, mid) >= p)
            {
                end = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        return start;
    }
};
