class Solution {
public:
    int waysToSplitArray(vector<int>& nums) 
    {
        int n = nums.size();
        
        long long int totalSum = 0;
        for(auto it : nums)
        {
            totalSum += it;
        }
        
        vector<long long> pre(n);
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                pre[i] = nums[i];
            }
            else
            {
                pre[i] = nums[i] + pre[i-1];
            }   
            cout << pre[i]<< ' ';
        }
        
        int ans = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(pre[i] >= (totalSum - pre[i]))
            {
                ans++;
            }
        }
        return ans;
    }
};
