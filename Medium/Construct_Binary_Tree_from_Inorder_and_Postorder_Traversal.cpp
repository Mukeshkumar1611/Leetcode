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
    TreeNode* helper(vector<int>& inorder,int instart, int inend, vector<int>& postorder, int pstart, int pend, map<int, int> &freq)
    {
        if(instart > inend or pstart > pend) return NULL;
        TreeNode* root = new TreeNode(postorder[pend]);
        int inIdx = freq[postorder[pend]];
        int numsLeft = inIdx - instart;

        root->left = helper(inorder, instart, inIdx - 1, 
        postorder, pstart, pstart + numsLeft - 1, freq);
        root->right = helper(inorder, inIdx + 1, inend, 
        postorder, pstart + numsLeft,pend - 1, freq);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int, int> freq;
        int n = inorder.size();
        for(int i = 0; i < n; i++)
        {
            freq[inorder[i]] = i;
        }
        return helper(inorder, 0, n-1, postorder, 0, n-1, freq);
    }
};

