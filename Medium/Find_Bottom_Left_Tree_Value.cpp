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
class Solution {
private:
    int helper(TreeNode* root)
    {
        if(root == NULL) return 0;
        return 
        1 + max(helper(root->left), helper(root->right));
    }

public:
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        int h = helper(root);

        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0; i < size; i++)
            {
                auto it  = q.front();
                if(it.second == h)
                {
                    return it.first->val;
                }
                if(it.first->left)
                {
                    q.push({it.first->left, it.second+ 1});
                }
                if(it.first->right)
                {
                    q.push({it.first->right, it.second + 1});
                }
                q.pop();
            }
        }
        return 0;
    }
};
