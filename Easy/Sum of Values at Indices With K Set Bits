class Solution {
private:
    int countSetBits(int n)
    {
        int count = 0;
        while(n > 0)
        {
            if(n & 1 == 1)count++;
            n = n >> 1;
        }
        return count;
    }
    
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(countSetBits(i) == k)
            {
                ans += nums[i];
            }
        }
        return ans;
    }
};
