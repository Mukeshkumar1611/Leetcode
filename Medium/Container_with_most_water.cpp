class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int start = 0;
        int end = height.size() - 1;
        int myAns = INT_MIN;
        while(start < end)
        {
            int mini = min(height[start], height[end]);
            int ans = mini * (end - start);
            if(ans > myAns)
            {
                myAns = ans;
            }
            if(mini == height[start])
            {
                start ++;
            }
            else
            {
                end--;
            }
        }
        return myAns;
    }
};
