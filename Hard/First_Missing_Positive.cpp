class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        long long int maxi = *max_element(nums.begin(), nums.end());

        for(long long int i = 1; i <= maxi + 1; i++)
        {
            if(freq.find(i) == freq.end())
            {
                return i;
            }
        }
        return 1;
    }
};
