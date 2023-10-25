class Solution {
public:
    int countCollisions(string directions) {
        int left = 0;
        int right = directions.size() - 1;

        while(left < directions.size() and directions[left] == 'L')
        {
            left++;
        }
        while(right >= 0 and directions[right] == 'R')
        {
            right--;
        }
        int ans = 0;

        for(int i = left; i <= right; i++)
        {
            if(directions[i] != 'S')
            {
                ans++;
            }
        }
        return ans;
    }
};
