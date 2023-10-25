class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> freq;
        int n = A.size();
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            freq[A[i]]++;
            int count = 0;
            for(int j = 0; j <= i; j++)
            {
                if(freq.count(B[j]) == true)
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
