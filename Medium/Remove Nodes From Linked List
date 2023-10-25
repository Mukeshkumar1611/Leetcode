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
    ListNode* removeNodes(ListNode* head) {
        if(head == NULL or head->next == NULL)
        {
            return head;
        }
        vector<int> ans;
        ListNode* temp = head;
        while(temp)
        {
            ans.push_back(temp->val);
            temp = temp -> next;
        }
        int rMax = ans[ans.size() - 1];
        for(int i = ans.size() - 2; i >= 0; i--)
        {
            if(ans[i] < rMax)
            {
                ans[i] = -1;
            }
            rMax = max(rMax, ans[i]);
        }
        vector<int> ll;
        for(int i = 0; i < ans.size(); i++)
        {
            if(ans[i] != -1)
            {
                ll.push_back(ans[i]);
            }
        }
        ListNode*heady = new ListNode(ll[0]);
        ListNode*tempy = heady;
        for(int i =1; i < ll.size(); i++)
        {
            ListNode*tempNode = new ListNode(ll[i]);
            tempy->next = tempNode;
            tempy = tempy->next;
        }
        return heady;
    }
};
