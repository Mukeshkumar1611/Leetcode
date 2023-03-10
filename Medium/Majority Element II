class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        vector<int> ans;
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }       
        for(auto itr : freq)
        {
            if(itr.second > nums.size()/3)
            {
                ans.push_back(itr.first);
            }
        }
        return ans;
    }
};
