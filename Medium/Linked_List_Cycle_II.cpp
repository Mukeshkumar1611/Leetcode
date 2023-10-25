/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        if(head == NULL or head->next == NULL)
        {
            return NULL;
        }

        ListNode* slow = head->next;
        ListNode* fast = head->next->next;

        while(fast != slow)
        {
            slow = slow->next;
            if(fast == NULL or fast->next == NULL)
            {
                return NULL;
            }
            fast = fast -> next -> next;
        }
        slow = head;
        while(slow != fast)
        {
            fast = fast -> next;
            slow = slow -> next;
            
        }
        return fast;
    }
};
