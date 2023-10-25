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
    TreeNode* helper(int &i, vector<int> &arr, int bound)
    {
        if(i == arr.size() or arr[i] > bound) return NULL;
        TreeNode* root = new TreeNode(arr[i++]);
        root->left = helper(i, arr, root->val);
        root->right = helper(i, arr, bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& arr) {
        int i = 0;
        return helper(i, arr, INT_MAX);
    }
};
