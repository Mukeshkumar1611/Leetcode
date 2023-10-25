class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg, pos;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < 0)
            {
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }

        int n = 0;
        int p = 0;
        while(n < neg.size() and p < pos.size())
        {
            ans.push_back(pos[p++]);
            ans.push_back(neg[n++]);
        }
        return ans;
    }
};
