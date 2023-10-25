class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int ans = 0;
        while(i < j)
        {
            int temp = nums[i] + nums[j];
            ans = max(ans, temp);
            i++;
            j--;
        }
        return ans;
    }
};
