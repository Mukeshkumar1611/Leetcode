class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        int count = 0;

        for(int i = 0; i < size; i++)
        {
            if(flowerbed[i] == 0)
            {
                bool left = (i == 0) || flowerbed[i-1] == 0;
                bool right = (i == size - 1) || flowerbed[i+1] == 0;

                if(left && right)
                {
                    count++;
                    flowerbed[i] = 1;
                }
            }
        }
        if(count >= n) return 1;
        return 0;
    }
};
