class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pref(n);
        
        long long int total_sum = nums[0];
        pref[0] = nums[0];
        for(int i = 1; i < n; i++)
        {
            pref[i] = nums[i] + pref[i - 1];
            total_sum += nums[i];
        }
        cout << total_sum << endl;
        
        
        int ans = -1;
        long long int min_avg = 1e9;
        
        for(int i = 0; i < n; i++)
        {
            long long int curr_idx_avg = pref[i] / (i + 1);
            long long int next_idx_avgs = 0;
            if(i < n - 1)
            {
                next_idx_avgs = (total_sum - pref[i]) / (n - (i + 1));
            }
            cout << curr_idx_avg << ' ' << next_idx_avgs << endl;
            long long int avg_ans = abs(next_idx_avgs - curr_idx_avg);
            
            if(avg_ans < min_avg)
            {
                min_avg = avg_ans;
                ans = i;
            }
        }
        return ans;
    }
};
