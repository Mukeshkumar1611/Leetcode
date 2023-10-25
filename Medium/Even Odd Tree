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
    bool goododd(vector<int>&ans)
    {
        for(int i = 0; i < ans.size() - 1;  i++)
        {
            if(ans[i] <= ans[i+1]) return false;
            if(ans[i] % 2) return false;
        }
        if(ans[ans.size() -1] % 2) return false;
        return true;
    }
    bool goodeven(vector<int>&ans)
    {
        for(int i = 0; i < ans.size() - 1;  i++)
        {
            if(ans[i] >= ans[i+1]) return false;
            if(ans[i] % 2 == 0) return false;
        }
        if(ans[ans.size() -1] % 2 ==0) return false;
        return true;
    }

public:
    bool isEvenOddTree(TreeNode* root) {
        if(root->val % 2 == 0) return false;
        queue<TreeNode*> q;
        q.push(root);
        int idx = 0;
        while(!q.empty())
        {
            int size = q.size();
            vector<int> ans;
            for(int i = 0; i < size; i++)
            {
                TreeNode* node = q.front();
                ans.push_back(node->val);
                q.pop();
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
            if(idx % 2 == 0)
            {
                if(ans.size() > 1 and !goodeven(ans))
                {
                    return false;
                }
            }
            else
            {
                if(ans.size() > 1 and !goododd(ans))
                {
                    return false;
                }
            }
            if(ans.size() == 1)
            {
                if(idx % 2)
                {
                    if(ans[0] % 2) return false;
                }
                else
                {
                    if(ans[0] % 2 ==0) return false;
                }
            }
            for(auto it : ans)
            {
                cout << it << ' ';
            }
            cout << endl;
            idx++;
        }
        return true;
    }
};
