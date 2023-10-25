class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> freq;
        for(auto it : tasks)
        {
            freq[it]++;
        }

        for(auto it : freq)
        {
            if(it.second <= 1)
            {
                return -1;
            }
        }
        int n = tasks.size();
        int ans = 0;
        for(auto it : freq)
        {
            int temp = it.second;
            int sum = 1;
            if(temp > 3)
            {
                if(temp % 3 == 0)
                {
                    sum = temp/3;
                }
                else
                {
                    sum = (temp/3)+1;
                }
            }
            ans += sum;
        }
        return ans;
    }
};
