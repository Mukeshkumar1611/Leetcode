class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;

        while(start <= end)
        {
            int mid = (start + end) / 2;
            if(nums[mid] > nums[end])
            {
                start = mid + 1;
            }
            else if(nums[mid] < nums[end])
            {
                end = mid;
            }
            else
            {
                end--;
            }
        }
        return nums[start];
    }
};
