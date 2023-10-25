class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        map<int, int> freq;
        for(auto it : nums)
        {
            freq[it]++;
        }
        vector<int> ans;
        int f = -1;
        int two = -1;
        for(int i = 1; i <= n; i++)
        {
            if(freq.find(i) == freq.end())
            {
                f = i;
            }
            if(freq[i] == 2)
            {
                two = i;
            }
        }
        ans.push_back(two);
        ans.push_back(f);
        return ans;
    }
};
