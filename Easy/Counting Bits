class Solution {
private:
    int countSetBits(int n)
    {
        int count = 0;
        while(n > 0)
        {
            if(n & 1 == 1)count++;
            n = n >> 1;
        }
        return count;
    }

public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for(int i = 1; i <= n; i++)
        {
            ans[i] = countSetBits(i);
        }
        return ans;
    }
};
