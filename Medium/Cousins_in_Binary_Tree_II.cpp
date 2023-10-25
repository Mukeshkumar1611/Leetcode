/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *replaceValueInTree(TreeNode *root)
    {
        unordered_map<TreeNode*, int> mp;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int childSum = 0;
            TreeNode* front = q.front();
            q.pop();
            if(front->left != NULL)
            {
                q.push(front->left);
                childSum += front->left->val;
            }
            if(front->right != NULL)
            {
                q.push(front->right);
                childSum += front->right->val;
            }
            mp[front] = childSum;
        }
        // for(auto it : mp)
        // {
        //     cout << it.first->val << ' ' << it.second << endl;
        // }
        map<int, int> levelSum;
        queue<TreeNode *> qq;
        qq.push(root);
        levelSum[0] = root->val;
        int k = 1;
        while (!qq.empty())
        {
            int sum = 0;
            int s = qq.size();
            for (int i = 0; i < s; i++)
            {
                TreeNode *front = qq.front();
                qq.pop();
                if (front->left)
                {
                    sum += front->left->val;
                    qq.push(front->left);
                }
                if (front->right)
                {
                    sum += front->right->val;
                    qq.push(front->right);
                }
            }
            levelSum[k] = sum;
            k++;
        }
        // for (auto it : levelSum)
        // {
        //     cout << it.first << ' ' << it.second << endl;
        // }

        TreeNode* rootAns = root;
        queue<pair<TreeNode*, int>> q1;
        q1.push({rootAns, 0});
        rootAns->val = 0;
        while(!q1.empty())
        {
            TreeNode* front = q1.front().first;
            int level = q1.front().second;
            q1.pop();
            int sumNext = levelSum[level + 1];
            if(front->left)
            {
                q1.push({front->left, level + 1});
                front->left->val = sumNext - mp[front];
            }
            if(front->right)
            {
                q1.push({front->right, level + 1});
                front->right->val = sumNext - mp[front];
            }
        }
        return rootAns;
    }
};
