class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int, int> mp;
        for(auto a : nums1)
        {
            for(auto b : nums2)
            {
                mp[a + b]++;
            }
        }
        int ans = 0;
        for(auto c : nums3)
        {
            for(auto d : nums4)
            {
                int temp = -(c + d);
                if(mp.find(temp) != mp.end())
                {
                    ans += mp[temp];
                }
            }
        }
        return ans;
    }
};
