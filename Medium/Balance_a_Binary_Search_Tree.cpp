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
    void preorder(TreeNode* root, vector<int>&nums)
    {
        if(root == NULL) return;
        nums.push_back(root->val);
        preorder(root->left, nums);
        preorder(root->right, nums);
    }

    TreeNode* generateBST(vector<int>&nums, int i, int j)
    {
        if(i > j) return NULL;
        int mid = (i + j) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = generateBST(nums, i, mid - 1);
        root->right = generateBST(nums, mid + 1, j);
        return root;
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL) return root;
        vector<int>nums;
        preorder(root, nums);
        int i = 0;
        int j = nums.size() - 1;
        // We can generate inorder instead of sorting
        sort(nums.begin(), nums.end());
        TreeNode* roots = generateBST(nums, i, j);
        return roots;
    }
};
