class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double sum = 0;
        int i = 0;
        int j = 0;
        int n = nums.size();
        double maxi = -1e9;

        while (j < nums.size())
        {
            sum = sum + nums[j];
            if (j - i + 1 < k)
            {
                j++;
            }
            else if (j - i + 1 == k)
            {
                double avg = sum / k;
                maxi = max(maxi, avg);
                sum = sum - nums[i];
                i++;
                j++;
            }
        }
        return maxi;
    }
};
