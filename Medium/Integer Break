class Solution {
private:
    int helper(int n, int i, int count)
    {
        if(n == 0 && count >= 2) return 1;
        if(n == 0) return 0;
        if(i > n) return 0;

        int take = i * helper(n - i, i, count + 1);
        int notTake = helper(n, i + 1, count);

        return max(take, notTake); 
    }

public:
    int integerBreak(int n) {
        return helper(n, 1, 0);
    }
};
