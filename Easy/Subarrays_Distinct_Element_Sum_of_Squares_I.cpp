class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0; 
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                set<int> s1;
                for(int k = i; k <= j; k++)
                {
                    s1.insert(nums[k]);
                }
                ans = ans + (s1.size() * s1.size());
            }
        }
        return ans;
    }
};