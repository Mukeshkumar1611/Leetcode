class Solution {
public:
    bool isPalindrome(int x) {
        long long int n = x;
        long long int ans = 0;
        while(x > 0)
        {
            long long int rem = x % 10;
            ans = (ans * 10) + rem;
            x = x / 10;
        }
        if(ans == n)
        {
            return true;
        }
        return false;
    }
};
