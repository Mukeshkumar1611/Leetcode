class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int, int> freq;
        for(auto it : nums)
        {
            freq[it]++;
        }    

        for(auto it : freq)
        {
            if(it.second == 1)
            {
                return it.first;
            }
        }
        return -1;
    }
};
