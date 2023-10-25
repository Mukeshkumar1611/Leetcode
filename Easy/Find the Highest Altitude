class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a = 0;
        int maxi = 0;
        for(int i = 0; i < gain.size(); i++)
        {
            maxi = max(maxi, a + gain[i]);
            a = a + gain[i];
        }
        return maxi;
    }
};
