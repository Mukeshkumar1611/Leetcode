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
    TreeNode* getTree(int node, unordered_map<int, int> &left, unordered_map<int, int> &right)
    {
        TreeNode* root = new TreeNode(node);
        if(left.count(node))
        {
            root->left = getTree(left[node], left, right);
        }
        else
        {
            root->left = NULL;
        }
        if(right.count(node))
        {
            root->right = getTree(right[node], left, right);
        }
        else
        {
            root->right = NULL;
        }
        return root;
    }

public:
    TreeNode* createBinaryTree(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        set<int> s1;
        for(int i = 0; i < n; i++)
        {
            s1.insert(grid[i][0]);
            s1.insert(grid[i][1]);
        }
        vector<int> v1;
        for(auto it : s1)
        {
            v1.push_back(it);
        }
        unordered_map<int, char> mp;
        for(int i = 0; i < n; i++)
        {
            mp[grid[i][1]] = 1;
        }
        int parent;
        for(int i = 0; i < v1.size(); i++)
        {
            if(mp.count(v1[i]) == false)
            {
                parent =  v1[i];
                break;
            }
        }
        unordered_map<int, int> left, right;
        for(int i = 0; i < n; i++)
        {
            if(grid[i][2] == 1)
            {
                left[grid[i][0]] = grid[i][1];
            }
            else
            {
                right[grid[i][0]] = grid[i][1];
            }
        }
        for(auto it : left)
        {
            cout << it.first << ' ' << it.second << endl;
        }
        TreeNode* res = getTree(parent, left, right);
        return res;        
    }
};
