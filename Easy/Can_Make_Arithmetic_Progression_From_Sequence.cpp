class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int cd = arr[1] - arr[0];
        for(int i = 2; i < arr.size(); i++)
        {
            if(arr[i] - arr[i-1] != cd)
            {
                return false;
            }
        }
        return true;
    }
};
