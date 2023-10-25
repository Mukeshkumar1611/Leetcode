class Solution {
public:

    int helper(int idx, vector<int> &arr, int target)
    {
        if(idx == 0){
            if(target == 0 and arr[idx] == 0) return 2;
            if(target == 0 or arr[idx] == target) return 1;
            return 0;
        }
        int pick = 0;
        if(arr[idx] <= target) pick = helper(idx - 1, arr, target - arr[idx]);
        int notPick = helper(idx - 1, arr, target);

        return pick + notPick;
    }

    int countPartitions(int n, vector<int>&nums, int target)
    {
        int totalSum = 0;
        for(int i = 0; i < n; i++) totalSum += nums[i];

        if((totalSum - target < 0) or (totalSum - target) % 2) return false;
        return helper(n-1, nums, (totalSum - target) / 2);
    }

    int findWays(vector<int>& nums, int target)
    {
        int n = nums.size();
        return countPartitions(n, nums, target);
    }


    int findTargetSumWays(vector<int>& nums, int target) {
        return findWays(nums, target);
    }
};
