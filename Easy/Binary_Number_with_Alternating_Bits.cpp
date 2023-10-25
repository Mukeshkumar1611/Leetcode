class Solution {
public:
    bool hasAlternatingBits(int n) {
        int lastBit = (n&1);
        n >>= 1;

        while(n)
        {
            int currBit = (n & 1);
            if(lastBit == currBit)
            {
                return false;
            }
            lastBit = currBit;
            n>>=1;
        }
        return true;
    }
};
