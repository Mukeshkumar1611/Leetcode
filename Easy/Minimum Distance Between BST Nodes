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
    vector<int>ans;
    void preOrder(TreeNode* root)
    {
        if(root ==  NULL)
        {
            return;
        }
        ans.push_back(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }

    int minDiffInBST(TreeNode* root) {
        preOrder(root);
        int mini = INT_MAX;
        sort(ans.begin(), ans.end());
        for(int i = 1; i < ans.size(); i++){
            if(abs(ans[i] - ans[i-1]) < mini)
            {
                mini = abs(ans[i] - ans[i-1]);
            }
        }
        return mini;
    }
};
