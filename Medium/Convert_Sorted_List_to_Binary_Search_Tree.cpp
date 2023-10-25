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
    TreeNode* generateBST(vector<int>&ans, int i, int j)
    {
        if(i > j) return NULL;
        int mid = (i + j) / 2;
        TreeNode* root = new TreeNode(ans[mid]);
        root->left = generateBST(ans, i, mid - 1);
        root->right = generateBST(ans, mid + 1, j);
        return root;
    }

public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp)
        {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        int j = ans.size() - 1;
        TreeNode* root = generateBST(ans, i, j);
        return root;
    }
};
