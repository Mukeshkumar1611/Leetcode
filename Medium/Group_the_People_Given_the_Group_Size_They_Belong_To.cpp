class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;

        map<int, vector<int>> freq;
        for(int i = 0; i <  groupSizes.size(); i++)
        {
            freq[groupSizes[i]].push_back(i);
        }

        for(auto it : freq)
        {
            vector<int>temp = freq[it.first];

            if(temp.size() == it.first)
            {
                ans.push_back(temp);
                freq.erase(it.first);
            }
            else if(temp.size() > it.first)
            {
                int k = 0;
                int s = temp.size();
                int one_size = (s / it.first);

                for(int i = 0; i < one_size; i++)
                {
                    int temp_var = it.first;
                    vector<int> myVec;
                    while(temp_var--)
                    {
                        myVec.push_back(temp[k++]);
                    }
                    ans.push_back(myVec);
                }
                freq.erase(it.first);
            }
        }
        return ans;
    }
};
