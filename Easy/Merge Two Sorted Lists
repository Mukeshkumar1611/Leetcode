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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* ptr;
        ListNode* head;
        ListNode* connect;
        vector<int> v1;
        while(list1)
        {
            v1.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2)
        {
            v1.push_back(list2->val);
            list2 = list2->next;
        }
        sort(v1.begin(), v1.end());
        for(int i = 0; i < v1.size(); i++)
        {
            ptr = new ListNode();
            ptr->val = v1[i];
            if(i == 0)
            {
                head = ptr; 
                connect = head;
            }
            else
            {
                connect -> next =  ptr;
                connect = connect -> next;

            }
        }
        return head;
    }
};
