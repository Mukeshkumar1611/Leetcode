class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int zors = 0;
        for(auto it : derived)
        {
            zors = zors ^ it;
        }
        if(zors == 0)  return 1;
        return 0;
    }
};
