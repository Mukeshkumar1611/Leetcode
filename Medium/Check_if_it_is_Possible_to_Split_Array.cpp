class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        if(nums.size() == 1)
        {
            if(m >= 1) return true;
        }
        
        if(nums.size() == 2)
        {
            if(m > 1) return true;
        }
        int countPairs = 0;
        bool flag = 0;
        
        for(int i = 1; i < nums.size(); i++)
        {
            int pairSum = nums[i] + nums[i-1];
            if(pairSum >= m)
            {
                countPairs++;
            }
        }
        if(countPairs > 0) return true;
        return false;
    }
};
