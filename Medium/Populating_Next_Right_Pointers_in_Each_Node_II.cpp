class Solution
{
public:
    Node *connect(Node *root)
    {
        if(!root) return NULL;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            int s = q.size();
            vector<Node *> v1;
            for (int i = 0; i < s; i++)
            {
                Node *front = q.front();
                v1.push_back(front);
                if (front->left)
                {
                    q.push(front->left);
                }
                if (front->right)
                {
                    q.push(front->right);
                }
                q.pop();
            }
            for (int i = 0; i < v1.size() - 1; i++)
            {
                cout << v1[i]->val << ' ';
                v1[i]->next = v1[i + 1];
            }
            v1[v1.size() - 1]->next = NULL;
            v1.clear();
        }
        return root;
    }
};
