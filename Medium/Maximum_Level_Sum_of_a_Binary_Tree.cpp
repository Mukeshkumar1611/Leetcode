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
    int maxLevelSum(TreeNode* root) {
        int maxi = root->val;
        queue<TreeNode*> q;
        q.push(root);
        int idx = 1;
        int ans = 1;
        while(!q.empty())
        {
            int s = q.size();
            int sum = 0;
            for(int i = 0; i < s; i++)
            {
                TreeNode* front = q.front();
                q.pop();
                sum += front->val;
                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
            }
            if(sum > maxi)
            {
                maxi = sum;
                ans = idx;
            }
            idx++;
        }
        return ans;
    }
};
