class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &nums)
    {
        stack<int> stk;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0 or stk.empty())
            {
                stk.push(nums[i]);
            }
            else
            {
                while (!stk.empty() and stk.top() > 0 and abs(nums[i]) > stk.top())
                {
                    stk.pop();
                }
                if (!stk.empty() and abs(nums[i]) == stk.top())
                {
                    stk.pop();
                }
                else
                {
                    if (stk.empty() or stk.top() < 0)
                    {
                        stk.push(nums[i]);
                    }
                }
            }
        }
        vector<int> ans;
        while (!stk.empty())
        {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
