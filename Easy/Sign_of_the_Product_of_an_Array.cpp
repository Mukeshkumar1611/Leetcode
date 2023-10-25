class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        long long int pro = 1;
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0) return 0;
            if(nums[i] < 1) count++;
        }
        if(count % 2) return -1;
        return 1;
    }
};
