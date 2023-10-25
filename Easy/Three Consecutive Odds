class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size() <= 2) return 0;
        int count = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] % 2) count++;
            else count = 0;
            if(count == 3)
            {
                return 1;
            }
        }
        return 0;
    }
};
