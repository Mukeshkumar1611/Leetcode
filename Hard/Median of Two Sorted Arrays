class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums2.size() < nums1.size())
            return findMedianSortedArrays(nums2, nums1);
        int start = 0;
        int end = nums1.size();
        int n1 = nums1.size();
        int n2 = nums2.size();

        while (start <= end)
        {
            int cut1 = (start + end) / 2;
            int cut2 = (n1 + n2 + 1) / 2 - cut1;

            int left1;
            if (cut1 == 0)
                left1 = INT_MIN;

            else
                left1 = nums1[cut1 - 1];

            int left2;
            if (cut2 == 0)
                left2 = INT_MIN;
            else
                left2 = nums2[cut2 - 1];

            int right1;
            if (cut1 == n1)
                right1 = INT_MAX;
            else
                right1 = nums1[cut1];

            int right2;
            if (cut2 == n2)
                right2 = INT_MAX;
            else
                right2 = nums2[cut2];

            if (left1 <= right2 and left2 <= right1)
            {
                if ((n1 + n2) % 2 == 0)
                {
                    int ans = max(left1, left2) + min(right1, right2);
                    return ans / 2.0;
                }
                else
                {
                    return max(left1, left2);
                }
            }
            else if (left1 > right2)
            {
                end = cut1 - 1;
            }
            else
            {
                start = cut1 + 1;
            }
        }
        return 0.0;
    }
};
