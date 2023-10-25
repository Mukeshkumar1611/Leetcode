// Dutch National Flag Algorithm

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while(mid <= high)
        {
            if(arr[mid] ==0)
            {
                swap(arr[mid], arr[low]);
                mid++;
                low++;
            }
            else if(arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};
