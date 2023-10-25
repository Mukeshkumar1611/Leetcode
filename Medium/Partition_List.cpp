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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* less = new ListNode(-200);
        ListNode* lessTemp = less;

        ListNode* greater = new ListNode(-200);
        ListNode* greaterTemp = greater;

        while(temp)
        {
            if(temp-> val < x)
            {
                lessTemp->next = temp;
                lessTemp = lessTemp->next;
            }
            else
            {
                greaterTemp->next = temp;
                greaterTemp = greaterTemp->next;
            }
            temp = temp->next;
        }
        lessTemp->next = NULL;
        greaterTemp->next = NULL;
        ListNode* ans = new ListNode(-200);
        ListNode* ptr = ans;
        
        while(less)
        {
            if(less->val != -200)
            {
                ptr -> next = less;
                ptr = ptr->next;
            }
            less = less->next;
        }

        while(greater)
        {
            if(greater -> val != -200)
            {
                ptr -> next = greater;
                ptr = ptr->next;
            }
            greater = greater -> next;
        }
        return ans-> next;
    }
};
