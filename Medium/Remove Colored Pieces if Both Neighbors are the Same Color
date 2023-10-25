class Solution {
public:
    bool winnerOfGame(string colors) 
    {
        int n = colors.size();
        int aliceTurns = 0;
        int bobTurns = 0;

        int i = 0;
        while(i < n)
        {
            int j = i;
            
            if(colors[i] == 'A')
            {
                int count = 0;
                while(colors[j] == 'A')
                {
                    count++;
                    j++;
                }
                if((count - 3 + 1) > 0)
                {
                    aliceTurns += (count - 3 + 1);
                }
            }

            else
            {
                int count = 0;
                while(colors[j] == 'B')
                {
                    count++;
                    j++;
                }
                if((count - 3 + 1) > 0)
                {
                    bobTurns += (count - 3 + 1);
                }
            }
            i = j;
        }

        if(aliceTurns > bobTurns) return 1;
        return 0;
    }
};
