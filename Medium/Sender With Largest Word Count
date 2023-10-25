class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string, int> freq;
        char ch = ' ';
        string ans = "";
        int maxi = 0;
        
        for(int i = 0; i < messages.size(); i++)
        {
            string temp = messages[i];
            int spaces = count(temp.begin(), temp.end(), ch) + 1;
            
            freq[senders[i]] += spaces;
            
            int currMaxi = freq[senders[i]];
            
            if(currMaxi > maxi)
            {
                maxi  = currMaxi;
                ans = senders[i];
            }
            else if(currMaxi == maxi)
            {
                ans = max(ans, senders[i]);
            }
        }
        return ans;
    }
};
