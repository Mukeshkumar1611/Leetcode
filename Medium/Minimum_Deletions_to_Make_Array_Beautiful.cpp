class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size();
        int currCheckIdx = 0;
        int del = 0;

        for(int i = 0; i < n - 1; i++)
        {
            if(nums[i] == nums[i + 1] && (i % 2) == currCheckIdx)
            {
                del++;
                if(currCheckIdx == 0)
                {
                    currCheckIdx = 1;
                }
                else
                {
                    currCheckIdx = 0;
                }
            }
        }
        if((n - del) % 2) del++;
        return del;
    }
};
