class Solution {
private:
    bool isPossible(vector<int> &time, int totalTrips, long long int mid)
    {
        long long int temp = 0;
        for(int i = 0; i < time.size(); i++)
        {
            temp = temp + (mid/time[i]);
        }
        if(temp < totalTrips)
        {
            return false;
        }
        return true;
    }
    
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int start = 1;
        long long int end = 100000000000000;
        long long ans = 0;
        
        while(start <= end)
        {
            long long int mid = (start + end) / 2;
            // cout << mid << endl;
            if(isPossible(time, totalTrips, mid))
            {
                // cout << "h";
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
