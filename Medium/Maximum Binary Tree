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
    int idx(vector<int>&nums, int &maxi, int i, int j)
    {
        int id = i;
        for(int k = i; k <= j; k++)
        {
            if(nums[k] > maxi)
            {
                maxi = nums[k];
                id = k;
            }
        }
        return id;
    }

    TreeNode* generateBinaryTree(vector<int>&nums, int i, int j)
    {
        if(i > j) return NULL;
        int maxi = 0;
        int maxiIdx = idx(nums, maxi, i, j);
        TreeNode* root = new TreeNode(nums[maxiIdx]);
        root->left = generateBinaryTree(nums, i, maxiIdx-1);
        root->right = generateBinaryTree(nums, maxiIdx + 1, j);
        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        TreeNode* root = generateBinaryTree(nums, i, j);
        return root;
    }
};
