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

    int len(ListNode* head)
    {
        int count=  0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return NULL;

        int size = len(head);
        if(n == size)
        {
            return head->next;
        }
        int ans = size - n;
        int count = 1;
        ListNode* temp = head;
        while(count < ans)
        {
            count++;
            temp = temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
