class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        set<vector<int>> s1;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int k = j + 1;
                int l = nums.size() - 1;
                while (k < l)
                {
                    long long int sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target)
                    {
                        s1.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    }
                    else if (sum > target)
                    {
                        l--;
                    }
                    else
                    {
                        k++;
                    }
                }
            }
        }
        for (auto it : s1)
        {
            ans.push_back(it);
        }
        return ans;
    }
};
