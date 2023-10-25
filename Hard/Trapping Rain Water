class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        int leftMax = 0;
        int rightMax = 0;
        int ans = 0;
        int left = 0;
        int right = n-1;
        
        while(left <= right)
        {
            if(arr[left] < arr[right])
            {
                if(arr[left] > leftMax) leftMax = arr[left];
                else ans += leftMax - arr[left];
                left++;
            }
            else
            {
                if(arr[right] > rightMax) rightMax = arr[right];
                else ans = ans + rightMax - arr[right];
                right--;
            }
        }
        return ans;
    }
};
