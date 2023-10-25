class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2){
        vector<vector<int>> ans;
        unordered_map<int, int> freq1;
        unordered_map<int, int> freq2;

        for(int i = 0; i < nums1.size(); i++)
        {
            freq1[nums1[i]]++;
        }

        for(int i = 0; i < nums2.size(); i++)
        {
            freq2[nums2[i]]++;
        }
        set<int> a;
        set<int> b;
        for(int i = 0; i < nums1.size(); i++)
        {
            if(freq2.count(nums1[i]) == true)
            {
                continue;
            }
            else
            {
                a.insert(nums1[i]);
            }
        }

        for(int i = 0; i < nums2.size(); i++)
        {
            if(freq1.count(nums2[i]) == true)
            {
                continue;
            }
            else
            {
                b.insert(nums2[i]);
            }
        }
        vector<int> v1;
        vector<int> v2;
        for(auto it : a)
        {
            v1.push_back(it);
        }
        for(auto it : b)
        {
            v2.push_back(it);
        }

        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};
