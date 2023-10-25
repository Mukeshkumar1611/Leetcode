class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    v1.push_back(i);
                    v1.push_back(j);
                }
            }
        }
        return v1;
    }
};
