class Solution
{
public:
    vector<string> findAllRecipes(vector<string> &recipes, vector<vector<string>> &ingredients, vector<string> &supplies)
    {
        int rsize = recipes.size();
        unordered_map<string, vector<string>> freq;

        for (int i = 0; i < rsize; i++)
        {
            for (int j = 0; j < ingredients[i].size(); j++)
            {
                freq[ingredients[i][j]].push_back(recipes[i]);
            }
        }

        unordered_map<string, int> indegree;
        queue<string> q;
        for (int i = 0; i < rsize; i++)
        {
            indegree[recipes[i]] = ingredients[i].size();
        }

        for (int i = 0; i < supplies.size(); i++)
        {
            q.push(supplies[i]);
        }

        vector<string> ans;
        while (!q.empty())
        {
            string front = q.front();
            q.pop();
            vector<string> thatCanBeMade = freq[front];

            for (int i = 0; i < thatCanBeMade.size(); i++)
            {
                indegree[thatCanBeMade[i]]--;
                if (indegree[thatCanBeMade[i]] == 0)
                {
                    ans.push_back(thatCanBeMade[i]);
                    q.push(thatCanBeMade[i]);
                }
            }
        }
        return ans;
    }
};
