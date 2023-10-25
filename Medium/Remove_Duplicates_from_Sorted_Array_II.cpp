class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        map<int, int> freq;
        for(int i = 0; i < nums.size(); i++)
        {
            if(freq[nums[i]]==2) continue;
            freq[nums[i]]++;
        }
        vector<int> ans;
        for(auto it : freq)
        {
            for(int i = 0; i < it.second; i++)
            {
                ans.push_back(it.first);
            }
        }
        for(int i = 0; i < nums.size(); i++)
        {
            nums.pop_back();
        }
        nums = ans;
        return ans.size();
    }
};
