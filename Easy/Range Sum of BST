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

    void helper(TreeNode* root, int low, int high, vector<int>&v1)
    {
        if(root == NULL) return;
        if(root->val >= low and root->val <= high)
        {
            v1.push_back(root->val);
        }
        helper(root->left, low, high, v1);
        helper(root->right, low, high, v1);
    }

    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        vector<int> v1;
        helper(root, low, high, v1);
        int ans = 0;
        for(int i= 0; i <v1.size(); i++)
        {
            ans += v1[i];
        }
        return ans;
    }
};
