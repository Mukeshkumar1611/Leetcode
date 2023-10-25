class Solution {
private:
    static bool comp(vector<int>&a, vector<int>&b)
    {
        if(a[0] == b[0])
        {
            return a[1] > b[1];
        }
        return a[0] < b[0];
    }

    int helper(vector<vector<int>> &nums)
    {
        int n = nums.size();
        if(n == 0 || n == 1) return n;

        vector<int> v1;
        v1.push_back(nums[0][1]);

        for(int i = 1; i < n; i++)
        {
            if(nums[i][1] > v1.back())
            {
                v1.push_back(nums[i][1]);
            }
            else
            {
                int idx = lower_bound(v1.begin(), v1.end(), nums[i][1]) - v1.begin();
                v1[idx] = nums[i][1];
            }
        }
        int ans = v1.size();
        return ans;
    }

public:
    int maxEnvelopes(vector<vector<int>>& nums) 
    {
        sort(nums.begin(), nums.end(), comp);
        return helper(nums);
    }
};
