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
    int hammingDistance(int x, int y) {
        int hami = x ^ y;
        return countSetBits(hami);
    }
};
