class Solution {
private:
    int ans = 1e9;
    void helper(int idx, int currAns, vector<int> &toppingCosts, int &target)
    {
        if(idx >= toppingCosts.size())
        {
            if(abs(currAns - target) < abs(ans - target))
            {
                ans = currAns;
            }
            else if(abs(currAns - target) == abs(ans - target))
            {
                ans = min(ans, currAns);
            }
            return;
        }
        
        helper(idx + 1, currAns, toppingCosts, target); // Take Nothing 
        helper(idx + 1, currAns + toppingCosts[idx] , toppingCosts, target); // Take One Time 
        helper(idx + 1, currAns + (2 * toppingCosts[idx]), toppingCosts, target); // Take Two Times 
    }
    
public:
    int closestCost(vector<int>& baseCosts, vector<int>& toppingCosts, int target) {
        int n = baseCosts.size();
        int m = toppingCosts.size();
        
        for(int i = 0; i < n; i++)
        {
            helper(0, baseCosts[i], toppingCosts, target);
        }
        
        return ans;
    }
};
