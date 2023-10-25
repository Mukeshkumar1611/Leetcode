class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {
        vector<bool> ans;

        int q = l.size();

        for (int i = 0; i < q; i++)
        {
            int start = l[i];
            int end = r[i];
            vector<int> temp;

            for (int j = start; j <= end; j++)
            {
                temp.push_back(nums[j]);
            }
            sort(temp.begin(), temp.end());

            if (temp.size() <= 1)
            {
                ans.push_back(0);
                break;
            }
            
            int temp_diff = temp[1] - temp[0];
            bool flag = 0;
            for (int i = 1; i < temp.size(); i++)
            {
                if (temp[i] - temp[i - 1] != temp_diff)
                {
                    flag = 1;
                    ans.push_back(0);
                    break;
                }
            }
            if (!flag)
            {
                ans.push_back(1);
            }
        }
        return ans;
    }
};
