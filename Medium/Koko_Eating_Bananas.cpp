class Solution {
private:
    bool isPossible(vector<int> &piles, int mid, int hours)
    {
        long long ans = 0;
        for(int i = 0; i < piles.size(); i++)
        {
            if(piles[i] % mid == 0)
            {
                ans += piles[i] /mid;
            }
            else
            {
                ans += piles[i] / mid + 1;
            }
        }
        if(ans <= hours) return true;
        return false;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(), piles.end());
        int ans;

        while(start <= end)
        {
            int mid = (start + end)/2;

            if(isPossible(piles, mid, h))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
