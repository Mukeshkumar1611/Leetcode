class Solution {
private:
    int dp[101][101];
    int helper(int idx, int end_time, vector<vector<int>> &clips, int &time)
    {
        if(end_time >= time) return 0;
        if(idx >= clips.size()) return 1e9;
        if(dp[idx][end_time] != -1) return dp[idx][end_time];

        int take = 1e9;
        if(clips[idx][0] <= end_time)
        {
            take = 1 + helper(idx + 1, clips[idx][1], clips, time);
        }

        int notTake = helper(idx + 1, end_time, clips, time);

        return dp[idx][end_time] = min(take, notTake);
    }

public:
    int videoStitching(vector<vector<int>>& clips, int time) 
    {
        sort(clips.begin(), clips.end());
        
        memset(dp, -1, sizeof(dp));
        int ans = helper(0, 0, clips, time);

        if(ans >= 1e9) return -1;
        return ans;
    }
};
