class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = nums[nums.size() - 1];
        int mk = ans * k;
        
        int sum = 0;
        for(int i = 1; i < k; i++)
        {
            sum += i;
        }      
        return mk + sum;
    }
};
