class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = travel.size();
        vector<int> time(n+1, 0);
        time[0] = 0;
        for(int i = 1; i < n+1; i++)
        {
            time[i] = travel[i-1] + time[i-1];
        }
        for(auto it : time)
        {
            cout << it << " ";
        }
        int countGs = 0;
        int countPs = 0;
        int countMs = 0;
        int lastIdxM = -1;
        int lastIdxP = -1;
        int lastIdxG = -1;
        for(int i = 0; i < garbage.size(); i++)
        {
            string temp = garbage[i];
            for(int j = 0; j < temp.size(); j++)
            {
                if(temp[j] == 'P')
                {
                    countPs++;
                    lastIdxP = i;
                }
                else if(temp[j] == 'G')
                {
                    countGs++;
                    lastIdxG = i;
                }
                else if(temp[j] == 'M')
                {
                    countMs++;
                    lastIdxM = i;
                }
            }
        }

        int ans = 0;
        if(lastIdxM != -1)
        {
            ans = ans + time[lastIdxM] + countMs;
        }
        if(lastIdxG != -1)
        {
            ans = ans + time[lastIdxG] + countGs;
        }
        if(lastIdxP != -1)
        {
            ans = ans + time[lastIdxP] + countPs;
        }
        return ans;
    }
};
