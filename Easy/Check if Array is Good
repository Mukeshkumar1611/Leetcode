class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        map<int, int> freq;
        for(auto it : nums)
        {
            freq[it]++;
        }
        if(freq[n-1] != 2)
        {
            return false;
        }
        for(int i = 1; i < n - 1; i++)
        {
            if(freq[i] != 1)
            {
                return false;
            }
        }
        return true;
    }
};
