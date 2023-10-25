class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int idx = n - 1;

        for(int i = n-1; i >= 0; i--)
        {
            if(i + nums[i] >= idx)
            {
                idx = i;
            }
        }
        if(idx == 0) return true;
        return false;
    }
};
