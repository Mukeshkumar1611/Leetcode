class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        long long pos = 0;
        long long neg = 0;
        if(k == 0){
            if(nums1 == nums2) return 0;
            return -1;
        }
        for(int i = 0; i < nums1.size(); i++)
        {
            long long diff = nums1[i] - nums2[i];
            if(diff % k) return -1;
            if(diff >= 0) pos += diff/k;
            else neg += diff/k;
        }
        if(pos + neg==0)
        {
            return pos;
        }
        return -1;
    }
};  
