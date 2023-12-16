class Solution 
{
public:
    int accountBalanceAfterPurchase(int n) 
    {
        int ans = 0;
        int rem = n % 10;
        if(n < 5)
        {
            return 100;
        }
        if(n <= 10)
        {
            return 90;
        }
        else
        {
            if(rem >= 5)
            {
                ans = (n + (10 - (rem)));
            }
            else
            {
                ans = n - rem;
            }
        }
        return 100 - ans;
    }
};
