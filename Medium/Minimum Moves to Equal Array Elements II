class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = 0;
        sort(nums.begin(), nums.end());

        while(start <= end)
        {
            ans += nums[end] - nums[start];
            start++;
            end--;
        }
        return ans;
    }
};
