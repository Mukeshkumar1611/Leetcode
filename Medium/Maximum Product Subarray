class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi1 = -1e9;
        int maxi2 = -1e9;
        int pro  = 1;

        for(int i = 0; i < nums.size(); i++)
        {
            pro = pro * nums[i];
            maxi1 = max(maxi1, pro);
            if(pro == 0)
            {
                pro = 1;
            }
        }
        pro  = 1;

        for(int i = nums.size() - 1; i >= 0; i--)
        {
            pro = pro * nums[i];
            maxi2 = max(maxi2, pro);
            if(pro == 0)
            {
                pro = 1;
            }
        }
        return max(maxi1, maxi2);
    }
};
