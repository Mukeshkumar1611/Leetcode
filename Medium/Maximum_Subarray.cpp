class Solution
{
public:
    int maxSubArray(vector<int> &arr)
    {
        int n = arr.size();
        int currSum = 0;
        int maxSum = INT_MIN;

        for(int i = 0; i < n; i++)
        {
            currSum += arr[i];
            maxSum = max(currSum, maxSum);
            if(currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    }
};
