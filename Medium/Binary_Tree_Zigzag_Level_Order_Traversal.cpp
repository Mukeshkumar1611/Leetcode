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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        queue<TreeNode*> q;
        vector<vector<int>> v1;
        if(root == NULL) return v1;
        q.push(root);
        int flag = 0;
        while(!q.empty())
        {
            int s = q.size();
            vector<int> ans;
            for(int i=0;i<s; i++)
            {
                TreeNode* front = q.front();    
                ans.push_back(front->val);
                q.pop();  
                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                } 
            }
            if(flag == 0)
            {
                v1.push_back(ans);
                flag = 1;
            }
            else
            {
                flag = 0;
                reverse(ans.begin(), ans.end());
                v1.push_back(ans);
            }
            ans.clear();
        }
        return v1;
    }
};
