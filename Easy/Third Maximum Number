class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> numsSet;
        vector<int> ans;

        for(int i=0;i<nums.size();i++)
            numsSet.insert(nums[i]);
        
        for(auto x : numsSet)
            ans.push_back(x);

        if(ans.size()==1)
            return ans[0];
  
        if(ans.size()==2){
            sort(ans.begin(),ans.end());
            return ans[1];
        }

        if(ans.size()>=3)
            return ans[ans.size()-3];
        
        return ans[ans.size()];
    }
};
