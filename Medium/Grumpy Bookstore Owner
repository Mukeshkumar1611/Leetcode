class Solution
{
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
    {
        int sum1 = 0;
        int n = grumpy.size();
        for (int i = 0; i < n; i++)
        {
            if (grumpy[i] == 0)
            {
                sum1 += customers[i];
            }
        }

        int maxi = 0;
        int sum = 0;
        int i = 0;
        int j = 0;

        while (j < n)
        {
            if (grumpy[j] == 1)
            {
                sum += customers[j];
            }
            if (j - i + 1 < minutes)
            {
                j++;
            }
            else if (j - i + 1 == minutes)
            {
                maxi = max(maxi, sum);
                if (grumpy[i] == 1)
                {
                    sum -= customers[i];
                }
                i++;
                j++;
            }
        }
        return maxi + sum1;
    }
};
