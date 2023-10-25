class Solution {
public:
    // If slope of two different lines (made by 3 points) is unequals then there we requries a new line.
    int minimumLines(vector<vector<int>>& stockPrices) 
    {
        int n = stockPrices.size();
        if(n <= 1) return 0;
        sort(stockPrices.begin(), stockPrices.end());
        
        int total_lines = 1; // Initially started with one line.
        for(int i = 2; i < n; i++)
        {
            long long int x1 = stockPrices[i][0];
            long long int y1 = stockPrices[i][1];
                
            long long int x2 = stockPrices[i - 1][0];
            long long int y2 = stockPrices[i - 1][1];
                
            long long int x3 = stockPrices[i - 2][0];
            long long int y3 = stockPrices[i - 2][1];
                
            long long int diff_one = (y2 - y1) * (x3 - x2);
            long long int diff_two = (y3 - y2) * (x2 - x1);
            
            if(diff_one != diff_two)
            {
                total_lines++;
            }
        }
        return total_lines;
    }
};
