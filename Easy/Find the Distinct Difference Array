class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++)
        {
            set<int> s1;
            set<int> s2;
            for(int k = 0; k <= i; k++)
            {
                s1.insert(nums[k]);
            }
            
            for(int j = i + 1; j < nums.size(); j++)
            {
                s2.insert(nums[j]);
            }
            ans.push_back(s1.size()-s2.size());
        }
        return ans;
    }
};
