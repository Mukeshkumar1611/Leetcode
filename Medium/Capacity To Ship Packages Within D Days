class Solution
{
private:
    int sumOfArray(vector<int> &arr)
    {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
        }
        return sum;
    }

    bool ableToLoad(int weight, vector<int> &arr, int givenDays)
    {
        int days = 1;
        int currWeight = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (currWeight + arr[i] <= weight)
                currWeight += arr[i];
            else
            {
                currWeight = arr[i];
                days++;
            }
        }
        return days <= givenDays;
    }

public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int start = *max_element(weights.begin(), weights.end());
        int end = sumOfArray(weights);
        int ans;

        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (ableToLoad(mid, weights, days))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
