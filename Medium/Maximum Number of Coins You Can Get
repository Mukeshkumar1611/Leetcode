class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int j = n - 1;
        int ans = 0;

        for(int i = 0; i < (n/3); i++)
        {
            j--;
            ans = ans + piles[j];
            j--;
        }
        return ans;
    }
};
