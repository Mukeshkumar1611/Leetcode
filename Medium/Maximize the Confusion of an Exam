class Solution
{
public:
    int maxConsecutiveAnswers(string answerKey, int k)
    {
        int t = 0;
        int f = 0;
        int n = answerKey.size();

        int i = 0;
        int j = 0;
        int ans = 0;
        while (j < n)
        {
            if (answerKey[j] == 'T')
            {
                t++;
            }
            else
            {
                f++;
            }
            if (t <= k or f <= k)
            {
                ans = t + f;
            }
            else
            {
                if (answerKey[i] == 'T')
                {
                    t--;
                }
                else
                {
                    f--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
