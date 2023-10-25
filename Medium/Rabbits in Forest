class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<long long, long long> freq;
        for(auto it : answers)
        {
            freq[it]++;
        }

        long long int ans = 0;
        for(auto it : freq)
        {
            if(it.first == 0)
            {
                ans += (it.second);
                continue;
            }
            if(it.first >= it.second)
            {
                ans = ans + (it.first + 1);
            }
            else
            {
                int count = it.second;
                while(count >= 1)
                {
                    ans = ans + it.first + 1;
                    count = count - (it.first + 1);
                }
            }
        }
        return ans;
    }
};
