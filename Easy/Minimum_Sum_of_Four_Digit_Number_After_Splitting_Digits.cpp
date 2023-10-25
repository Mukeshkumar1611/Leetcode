class Solution {
public:
    int minimumSum(int num) {
        vector<int> v1;
        while(num != 0)
        {
            int rem = num % 10;
            v1.push_back(rem);
            num = num / 10;
        }

        sort(v1.begin(), v1.end());
        int ans1 = (v1[0] * 10) + v1[3];
        int ans2 = (v1[1] * 10) + v1[2];
        int miniSum = ans1 + ans2;
        return miniSum;
    }
};
