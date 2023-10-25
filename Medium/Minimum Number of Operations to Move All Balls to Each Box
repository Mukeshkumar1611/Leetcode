class Solution {
private:
    int helper(int idx, unordered_map<int, int> &freq)
    {
        int ans = 0;
        for(auto it : freq)
        {
            int temp = abs(it.first - idx);
            ans += temp;
        }
        return ans;
    }
    
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        
        unordered_map<int, int> freq;
        for(int i = 0; i < n; i++)
        {
            if(boxes[i] == '1')
            {
                freq[i]++;
            }
        }
        
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            int temp = helper(i, freq);
            ans.push_back(temp);
        }
        return ans;
    }
};
