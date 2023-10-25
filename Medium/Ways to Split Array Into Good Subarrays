class Solution
{
public:
    int mode = 1e9 + 7;
    int numberOfGoodSubarraySplits(vector<int> &nums)
    {
        int c = 0;
        for(auto it : nums)
        {
            if(it == 0) c++;
        }
        
        if(c == nums.size()) return 0;
        long long int ans = 1;
        int flag = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1 && flag == 0)
            {
                cout <<"j";
                flag = 1;
                count = 0;
            }
            else if (nums[i] == 0 && flag == 1)
            {
                cout <<"k";
                count++;
            }
            else if (flag == 1 && nums[i] == 1)
            {
                cout <<"l";
                ans = ((ans % mode) * (count + 1)) % mode;
                count = 0;
            }
        }
        return ans % mode;
    }
};
