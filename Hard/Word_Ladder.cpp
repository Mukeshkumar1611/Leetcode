class Solution
{
public:
    int ladderLength(string beginWord, string endWord,
                     vector<string> &wordList)
    {
        queue<pair<string, int>> q;
        unordered_set<string> st(wordList.begin(), wordList.end());
        q.push({beginWord, 1});
        st.erase(beginWord);

        while (!q.empty())
        {
            string word = q.front().first;
            int steps = q.front().second;
            if (word == endWord)
            {
                return steps;
            }
            q.pop();

            for (int i = 0; i < word.size(); i++)
            {
                char ch = word[i];
                for (char ab = 'a'; ab <= 'z'; ab++)
                {
                    word[i] = ab;
                    if (st.find(word) != st.end())
                    {
                        q.push({word, steps + 1});
                        st.erase(word);
                    }
                }
                word[i] = ch;
            }
        }
        return 0;
    }
};
