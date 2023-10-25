class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0;
        int n = nums.size();
        int i = 0;
        int j = 0;
        int pairs_count = 0;
        map<int, int> freq;

        while(j < n)
        {
            freq[nums[j]]++;
            pairs_count += (freq[nums[j]] - 1);

            while(i < j && pairs_count >= k)
            {
                ans += (n - j);
                freq[nums[i]]--;
                pairs_count -= freq[nums[i]];
                i++;
            }
            j++;
        }
        return ans;
    }
};
