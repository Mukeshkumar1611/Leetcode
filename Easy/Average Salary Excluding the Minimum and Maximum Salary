class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double ans = 0;
        for(int i = 0; i < salary.size(); i++)
        {
            ans = ans + salary[i];
        }
        ans = ans - salary[0];
        ans = ans - salary[salary.size() - 1];
        double mk = ans/(salary.size() - 2);
        return mk;
    }
};
