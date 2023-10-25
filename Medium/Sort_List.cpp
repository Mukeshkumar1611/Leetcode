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
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        vector<int> ans;
        ListNode* temp = head;
        while(temp)
        {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        sort(ans.begin(), ans.end());

        head = new ListNode(ans[0]);
        temp = head;
        for(int i = 1; i < ans.size(); i++)
        {
            ListNode* newNode = new ListNode(ans[i]);
            temp->next = newNode;
            temp = newNode;
        }
        temp->next = NULL;
        return head;
    }
};
