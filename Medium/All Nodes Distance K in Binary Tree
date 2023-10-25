/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    void parents(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &mp)
    {
        queue<TreeNode*> q;
        
        q.push(root);
        while(!q.empty())
        {
            TreeNode* front = q.front();
            q.pop();
            if(front->left)
            {
                mp[front->left] = front;
                q.push(front->left);
            }
            if(front->right)
            {
                mp[front->right] = front;
                q.push(front->right);
            }
        }
    }

public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        unordered_map<TreeNode*, TreeNode*> mp;
        parents(root, mp);             
        unordered_map<TreeNode*, bool> visited;
        q.push(target);
        visited[target] = true;
        int dis =0;
        while(!q.empty())
        {
            int size = q.size();
            if(dis++ == k) break;
            for(int i = 0; i < size; i++)
            {
                TreeNode* front = q.front();
                q.pop();
                if(front->left and !visited[front->left])
                {
                    q.push(front->left);
                    visited[front->left] = true;
                }
                if(front->right and !visited[front->right])
                {
                    q.push(front->right);
                    visited[front->right] = true;
                }
                if(mp[front] and !visited[mp[front]])
                {
                    q.push(mp[front]);
                    visited[mp[front]] = true;
                }
            }
        }
        while(!q.empty())
        {
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};








