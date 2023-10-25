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
    void helper(TreeNode* root, string str, vector<string> &ans)
    {
        if(!root) return;
        
        int dig = root->val;
        char rootVal = dig + 'a';
        str.push_back(rootVal);
        if(!root->left && !root->right)
        {
            reverse(str.begin(), str.end());
            ans.push_back(str);
            return;
        }
        helper(root->left, str, ans);
        helper(root->right, str, ans);
    }

public:
    string smallestFromLeaf(TreeNode* root) 
    {
        vector<string> ans;
        string str = "";
        helper(root, str, ans); 
        sort(ans.begin(), ans.end());
        return ans[0];
    }
};
