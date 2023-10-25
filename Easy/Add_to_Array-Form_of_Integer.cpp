class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int i = n - 1;
        int carry = 0;
        vector<int> ans;
        while(i >= 0 or k > 0 or carry > 0)
        {
            int sum = carry;
            if(k > 0)
            {
                int rem = k % 10;
                sum = sum + rem;
                k = k / 10;
            }

            if(i >= 0)
            {
                sum = sum +nums[i];
                i--;
            }
            carry = sum /10;
            ans.push_back(sum % 10);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
