class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        long long ans = 0;
        long long sum = 0;
        set<int> st;
        
        while(j < n)
        {
            sum = sum + nums[j];
            if(st.find(nums[j]) != st.end())
            {
                while(st.find(nums[j]) != st.end())
                {
                    st.erase(nums[i]);
                    sum = sum - nums[i];
                    i++;
                }
            }
            st.insert(nums[j]);
            while(st.size() > k)
            {
                st.erase(nums[i]);
                    sum = sum - nums[i];
                    i++;
            }
            if(st.size() == k)
            {
                ans = max(ans, sum);
            }
            
            j++;
        }
        return ans;
    }
};
