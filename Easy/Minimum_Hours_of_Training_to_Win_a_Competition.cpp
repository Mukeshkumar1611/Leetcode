class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int n = energy.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            initialEnergy = initialEnergy - energy[i];
        }
        if(initialEnergy < 0)
        {
            initialEnergy = initialEnergy * -1;
            ans = initialEnergy + 1;
        }
        else if(initialEnergy == 0)
        {
            ans = 1;
        }
        cout << ans << endl;
        int cnt = 0;
        for (int i = 0; i < size(experience); i++)
        {
            if (experience[i] >= initialExperience)
            {
                int temp = experience[i] - initialExperience + 1;
                cnt += temp;
                initialExperience += temp + experience[i];
            }
            else
                initialExperience += experience[i];
        }
        // cout << temp << endl;
        return ans + cnt;
    }
};
