class Solution {
private:
    static bool cmp(pair<int, int>& a, pair<int, int>& b)
    {
        return a.second < b.second;
    } 
    
public:    
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) 
    {
        int n = capacity.size();
        vector<pair<int, int>> mpp;
        
        for(int i = 0; i < n; i++)
        {
            if(capacity[i] - rocks[i] >= 1)
            {
                mpp.push_back({i, capacity[i] - rocks[i]}); 
            }
        }
        
        int fullBags = (n - mpp.size());
        
        sort(mpp.begin(), mpp.end(), cmp);
        
        for(int i = 0; i < mpp.size(); i++)
        {
            if(mpp[i].second <= additionalRocks)
            {
                fullBags++;
                additionalRocks -= mpp[i].second;
            }
        }
        return fullBags;
    }
};
