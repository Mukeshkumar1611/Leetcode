class Solution {
public:
    int hIndex(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int idx = 0;
        int n = nums.size();
        while(idx < n and (n-idx) > nums[idx])
        {
            idx++;
        }        
        return n-idx;
    }
};
