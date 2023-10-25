class Solution
{
public:
    bool isNStraightHand(vector<int> &hand, int groupSize)
    {
        map<int, int> freq;
        for (int i = 0; i < hand.size(); i++)
        {
            freq[hand[i]]++;
        }
        for (auto it : freq)
        {
            if (freq[it.first] > 0)
            {
                for (int i = 1; i < groupSize; i++)
                {
                    freq[it.first + i] = freq[it.first + i] - freq[it.first];
                    if (freq[it.first + i] < 0)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
