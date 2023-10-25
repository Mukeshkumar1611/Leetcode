class Solution
{
private:
    bool isPossible(int mid, int boq, int flower, vector<int> &arr)
    {
        int adj = 0;
        int b = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] <= mid)
            {
                adj++;
                if (adj == flower)
                {
                    b++;
                    if (b == boq)
                    {
                        return true;
                    }
                    adj = 0;
                }
            }
            else
            {
                adj = 0;
            }
        }
        return false;
    }

public:
    int minDays(vector<int> &bloomDay, int m, int k)
    {

        int start = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = INT_MAX;

        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (isPossible(mid, m, k, bloomDay) == true)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
