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
    TreeNode* findLCA(TreeNode*root, TreeNode* p, TreeNode* q)
    {
        if(!root || root == p || root == q) return root;
        TreeNode* left = findLCA(root->left, p, q);
        TreeNode* right = findLCA(root->right, p, q);

        if(!left)
        {
            return right;
        }
        if(!right)
        {
            return left;
        }
        return root;
    }

public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        vector<TreeNode*> v1;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            v1.clear();
            for(int i = 0; i < size; i++)
            {
                TreeNode* front = q.front();
                q.pop();
                v1.push_back(front);

                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
            }   
        }

        TreeNode* ans;
        TreeNode* p = v1[0];
        for(auto it : v1)
        {
            ans = findLCA(root, p, it);
        }
        return ans;
    }
};
