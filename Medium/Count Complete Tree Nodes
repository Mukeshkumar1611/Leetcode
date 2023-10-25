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
    void preOrder(TreeNode* root, int &count)
    {
        if(root == NULL) return;
        if(root != NULL) count++;
        preOrder(root->left, count);
        preOrder(root->right, count);
    }

    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        int count = 0;
        preOrder(root, count);
        return count;
    }
};
