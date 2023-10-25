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
    set<int> ans;
    void preOrder(TreeNode* root)
    {
        if(root==NULL) return;
        ans.insert(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }

    int findSecondMinimumValue(TreeNode* root) {
        preOrder(root);
        if(ans.size() <= 1) return -1;
        vector<int> v1;
        for(auto it : ans)
        {
            v1.push_back(it);
        }
        sort(v1.begin(), v1.end());
        return v1[1];
    }
};
