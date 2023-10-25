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
    void helper(TreeNode* root, int target, vector<int> &v1, vector<vector<int>> &ans)
    {
        if(!root) return;
        v1.push_back(root->val);

        if(root->left == NULL && root->right == NULL)
        {
            int sum = 0;
            for(auto it : v1)
            {
                sum += it;
            }
            if(sum == target)ans.push_back(v1);
        }
        helper(root->left, target, v1, ans);
        helper(root->right, target, v1, ans);
        v1.pop_back();
    }

public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v1;
        helper(root, targetSum, v1, ans);
        return ans;
    }
};


