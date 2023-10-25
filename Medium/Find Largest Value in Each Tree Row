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
    int maxi(vector<int> &v1)
    {
        int ans = v1[0];
        for(int i = 0; i < v1.size(); i++)
        {
            if(v1[i] > ans)
            {
                ans = v1[i];
            }
        }
        return ans;
    }

public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int s = q.size();
            vector<int> v1;
            for(int i = 0; i < s; i++)
            {
                TreeNode* front = q.front();
                v1.push_back(front->val);
                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
                q.pop();
            }
            ans.push_back(maxi(v1));
        }
        return ans;
    }
};
