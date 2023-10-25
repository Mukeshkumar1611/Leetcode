class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack<pair<int, int>> st;
    
    int next(int price) {
        int days = 1;
        while(!st.empty() and price >= st.top().first)
        {
            days = days + st.top().second;
            st.pop();
        }
        st.push({price, days});
        return days;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
