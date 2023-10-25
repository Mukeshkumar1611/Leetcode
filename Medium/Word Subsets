class Solution
{
public:
    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {
        unordered_map<char, int> freq;

        // Storing max freq of each char in words2.
        for (auto it : words2)
        {
            unordered_map<char, int> temp;
            string str = it;
            for (auto it : str)
            {
                temp[it]++;
            }

            for(auto it : str)
            {
                if(temp[it] > freq[it])
                {
                    freq[it] = temp[it];
                }
            }
        }

        vector<string> ans;

        for(auto it : words1)
        {
            string curr = it; 
            unordered_map<char, int> mpp;
            for(auto it : curr)
            {
                mpp[it]++;
            }

            bool count = 0;
            for(auto itr : freq)
            {
                if(itr.second > mpp[itr.first])
                {
                    count = 1;
                    break;
                }
            }

            if(!count)
            {
                ans.push_back(it);
            }
        }
        return ans;
    }
};
