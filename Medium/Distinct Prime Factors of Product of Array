class Solution {

private:
    vector<int> primeFactors(int n)
    {
        vector<int> v1;
        while (n % 2 == 0)
        {
            v1.push_back(2);
            n = n / 2;
        }
        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            while (n % i == 0)
            {
                v1.push_back(i);
                n = n / i;
            }
        }
        if (n > 2)
        {
            v1.push_back(n);
        }
        return v1;
    }

public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            vector<int> v1 = primeFactors(nums[i]);
            for(auto it : v1)
            {
                ans.insert(it);
            }
        }
        return ans.size();
    }
};
