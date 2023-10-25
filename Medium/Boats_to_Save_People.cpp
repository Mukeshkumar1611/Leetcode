class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) 
    {
        sort(arr.begin(), arr.end());
        int left = 0;
        int right = arr.size() - 1;
        int ans = 0;

        while(left <= right)
        {
            int sum = arr[left] + arr[right];
            if(sum <= limit)
            {
                left++;
                right--;
                ans++;
            }
            else
            {
                right--;
                ans++;
            }
        }
        return ans;
    }
};
