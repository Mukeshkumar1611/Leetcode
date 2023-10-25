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
public:
    void inorder(TreeNode* root, vector<int>& v1)
    {
        if(root == NULL) return;
        inorder(root->left, v1);
        v1.push_back(root->val);
        inorder(root->right, v1);
    }

    int getMinimumDifference(TreeNode* root) {
        if(root == NULL) return 0;
        vector<int> v1;
        inorder(root, v1);
        int mini = 1e9;
        for(int i = 1; i < v1.size(); i++)
        {
            mini = min(mini, abs(v1[i] - v1[i-1]));
        }    
        return mini;
    }
};
