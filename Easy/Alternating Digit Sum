class Solution {
private:
    int reverse(int n)
    {
        int count = 0;
        while(n != 0)
        {
            count++;
            n = n / 10;
        }
        return count;
    }
    
public:
    int alternateDigitSum(int n) {
        int size = reverse(n);
        cout << size;
        int temp = n;
        int ans = 0;
        int count;
        if(size % 2)
        {
            count = 0;
        }
        else
        {
            count = 1;
        }
        while(temp != 0)
        {
            int rem = temp % 10;
            if(!count)
            {
                ans += rem;
                count = 1;
            }
            else
            {
                count = 0;
                ans -= rem;
            }
            temp = temp / 10;
        }
        return ans;
    }
};
