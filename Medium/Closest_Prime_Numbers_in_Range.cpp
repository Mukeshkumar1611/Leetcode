class Solution {
public:
    
    bool isPrime(int n)
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0) return false;
        }
        return true;
    }
    
    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        if(left < 2)
        {
            left = 2;
        }
        
        for(int i = left; i <= right; i++)
        {
            if(isPrime(i))
            {
                primes.push_back(i);
            }
        }
        
        if(primes.size() == 0 or primes.size() == 1)
        {
            return {-1, -1};
        }
        
        vector<int> ans(2);
        int mini = INT_MAX;
        for(int i = 1; i < primes.size(); i++)
        {
            if(abs(primes[i] - primes[i-1]) < mini)
            {
                ans.clear();
                mini = abs(primes[i] - primes[i-1]);
                ans.push_back(primes[i-1]);
                ans.push_back(primes[i]);
            }
        }
        return ans;
    }
};
