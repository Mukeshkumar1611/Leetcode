class Solution {
private:
    int countSetBits(int n)
    {
        int count = 0;
        while(n > 0)
        {
            if(n & 1 == 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }

public:
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int, int>> pq;
        for(int i = 0; i < arr.size(); i++)
        {
            int n_of_bits = countSetBits(arr[i]);
            pq.push({n_of_bits, arr[i]});
        }
        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
