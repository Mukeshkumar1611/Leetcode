class Solution
{
public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        priority_queue<pair<int, pair<int, int>>>pq;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                int sum = nums1[i] + nums2[j];
                if(pq.size() < k)
                {
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else if(sum < pq.top().first)
                {
                    pq.pop();
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else 
                {
                    break;
                }
            }
        }
        vector<vector<int>> ans;
        if(pq.size() < k)
        {
            k = pq.size();
        }
        while(k > 0)
        {
            pair<int, pair<int, int>> p1 = pq.top();
            pq.pop();
            vector<int> v1;
            int a = p1.second.first;
            int b = p1.second.second;
            v1.push_back(a);
            v1.push_back(b);
            ans.push_back(v1);
            k--;
        }
        return ans;
    }
};
