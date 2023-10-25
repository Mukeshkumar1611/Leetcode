class Solution
{
public:
    int kth(vector<int> &arr, int n, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < k; i++)
        {
            pq.push(arr[i]);
        }
        for (int i = k; i < n; i++)
        {
            if (arr[i] > pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }

    int findKthLargest(vector<int> &nums, int k)
    {
        return kth(nums, nums.size(), k);
    }
};
