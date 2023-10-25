class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool> temp(n, false);
        int recent = 0;
        temp[0] = true;
        
        for(int i = 0; i < n; i++)
        {
            int f =(((i+1) * k ) +recent) % n;
            if(temp[f] == true)
            {
                break;
            }
            else
            {
                temp[f] = true;
            }
            recent = f;
        }
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            if(temp[i] == false)
            {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
