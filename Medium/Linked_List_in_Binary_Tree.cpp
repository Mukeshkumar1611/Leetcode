/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    void findHeads(ListNode* head, TreeNode* root, vector<TreeNode*>&ans)
    {
        if(!root) return;
        if(root->val == head->val)
        {
            ans.push_back(root);
        }
        findHeads(head, root->left, ans);
        findHeads(head, root->right, ans);
    }

    bool check(ListNode* head, TreeNode* root)
    {
        if(head == NULL) return 1;
        if(!root) return 0;
        if(root->val != head->val) return 0;

        bool ans = 0;
        if(head->val == root->val)
        {
            ans = ans | check(head->next, root->left);
            ans = ans | check(head->next, root->right);
        }
        return ans;
    }

public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        vector<TreeNode*> ans;
        findHeads(head, root, ans);
        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++)
        {
            ListNode* temp = head;
            TreeNode* tempRoot = ans[i];
            if(check(temp, tempRoot))
            {
                return 1;
            }
        }
        return 0;
    }
};
