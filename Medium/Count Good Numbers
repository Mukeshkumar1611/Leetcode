#define mod  1000000007
class Solution { 
public:
    long long int power(long long int x, long long int y)
    {
        if(y == 0) return 1;
        long long ans = power(x, y/2);
        ans *= ans;
        ans%= mod;
        if(y % 2) ans = ans * x;
        ans = ans % mod;
        return ans;
    }

    int countGoodNumbers(long long n) 
    {
        long long int odd = n/2;
        long long int even = (n/2) + n % 2;

        return (power(5, even) * power(4, odd)) %  mod;
    }
};
