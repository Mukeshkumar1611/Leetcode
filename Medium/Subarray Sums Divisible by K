class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();    
        unordered_map<int, int> freq;
        int ans = 0;
        int prefix_sum = 0;
        freq[0] = 1;

        for(int i = 0; i < n; i++)
        {
            prefix_sum += nums[i];
            int rem = prefix_sum % k;
            if(rem < 0)
            {
                // For example, if you calculate -7 % 3 in C++, the result is -1, 
                // whereas mathematically, you might expect it to be 2 (because -7 is 
                // 2 less than the nearestmultiple of 3 in the negative direction).
                rem += k;
            }
            if(freq.find(rem) != freq.end())
            {
                ans += freq[rem];
            }
            freq[rem]++;
        }
        return ans;
    }
};
