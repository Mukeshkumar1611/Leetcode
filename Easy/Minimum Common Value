class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int mini = min(nums1.size(), nums2.size());
        
        unordered_map<int, int> freq;
        for(int i = 0; i < nums1.size(); i++)
        {
            freq[nums1[i]]++;
        }
        
        for(int i = 0; i < nums2.size(); i++)
        {
            if(freq.count(nums2[i]))
            {
                return nums2[i];
            }
        }
        return -1;
    }
};
