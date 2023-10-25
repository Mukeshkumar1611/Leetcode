class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        map<int, int> mp;
        int n = skill.size();
        int i = 0;
        int j = n - 1;
        int same = skill[i] + skill[j];
        while(i < j)
        {
            int tempSame = skill[i] + skill[j];
            if(same != tempSame) return -1;
            mp[i] = j;
            i++;
            j--;
        }

        long long ans = 0;
        for(auto it : mp)
        {
            ans = ans + (skill[it.first] * skill[it.second]);
        }
        return ans;
    }
};
