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
    int sum(TreeNode*root, int &count)
    {
        if(root==NULL) return 0;
        count++;
        return root->val + sum(root->left, count) + sum(root->right, count); 
    }

public:
    int averageOfSubtree(TreeNode* root) 
    {
        if(root == NULL) return 0;
        int count = 0;
        int ans = 0;
        int sums = sum(root, count);
        cout << sums << ' ';
        cout << count << ' ';
        if(sums/count==root->val)
        {
           ans++; 
        }
        return ans +averageOfSubtree(root->left) + averageOfSubtree(root->right);
    }
};
