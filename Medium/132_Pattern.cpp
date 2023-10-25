class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return 0;

        stack<int> stk;
        int third = INT_MIN;
        
        for(int i = n - 1; i >= 0; i--)
        {
            int curr = nums[i];
            if(curr < third) return 1;

            while(!stk.empty() && stk.top() < curr)
            {
                third = stk.top();
                stk.pop();
            }

            stk.push(curr);
        }
        return 0;
    }
};
