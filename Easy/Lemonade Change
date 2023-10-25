class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        unordered_map<int, int> freq;
        for (int i = 0; i < bills.size(); i++)
        {
            freq[bills[i]]++;
            if (bills[i] == 5)
            {
                continue;
            }
            else
            {
                int amt = bills[i];
                int changeReq = bills[i] - 5;
                if (changeReq >= 10)
                {
                    while (freq[10] >= 1 and changeReq >= 10)
                    {
                        freq[10]--;
                        changeReq -= 10;
                    }
                }
                while (freq[5] >= 1 and changeReq >= 5)
                {
                    freq[5]--;
                    changeReq -= 5;
                }
                if (changeReq != 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
