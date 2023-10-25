class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n);
        
        for(int i = (2 * n) - 1; i >= 0; i--)
        {
            while(!st.empty() and st.top() <= arr[i % n])
            {
                st.pop();
            }
            if(i < n)
            {
                if(!st.empty())
                {
                    ans[i] = st.top();
                }
                else
                {
                    ans[i%n] = -1;
                }
            }
            st.push(arr[i % n]);
        }
        return ans;
    }
};
