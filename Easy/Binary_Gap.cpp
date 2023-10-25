class Solution {
public:
    int binaryGap(int n) {
        int count = 0;
        int maxi = 0;
        int one = 0;

        while(n)
        {
            if((n&1) == 1 && one == 1)
            {
                maxi = max(maxi, count);
                count = 0;
            }
            else if((n & 1) == 1 && one == 0)
            {
                one = 1;
            }
            if(one == 1)
            {
                count++;
            }
            n >>= 1;
        }
        return maxi;
    }
};
