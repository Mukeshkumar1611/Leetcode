/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* helper(TreeNode* root, TreeNode* target)
    {
        if(root == NULL) return NULL;
        else if(root->val == target->val) return root;
        TreeNode * left = helper(root->left, target);
        TreeNode* right = helper(root->right, target);
        if(left != NULL) return left;
        return right;
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return helper(cloned, target);
    }
};
