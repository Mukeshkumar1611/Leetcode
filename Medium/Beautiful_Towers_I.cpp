class Solution {
private:
    long long helper(vector<int> &arr, int idx)
    {
        long long ans = arr[idx];
        int curr = arr[idx];
        for(int i = idx - 1; i >= 0; i--)
        {
            if(arr[i] <= curr)
            {
                ans += arr[i];
            }
            else
            {
                ans += curr;
            }
            curr = min(curr, arr[i]);
        }
        
        curr = arr[idx];
        for(int i = idx + 1; i < arr.size(); i++)
        {
            if(arr[i] < curr)
            {
                ans += arr[i];
            }
            else
            {
                ans += curr;
            }
            curr = min(curr, arr[i]);
        }
        return ans;
    }
    
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        int n = maxHeights.size();
        
        long long ans = 0;
        
        for(int i = 0; i < maxHeights.size(); i++)
        {
            long long temp = helper(maxHeights, i);
            ans = max(ans, temp);
        }
        
        return ans;
    }
};
