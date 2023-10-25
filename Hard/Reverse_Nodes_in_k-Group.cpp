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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        vector<int> ans;
        while(temp)
        {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int n = ans.size();
        for(int i = 0; i < n; i+=k)
        {
            if(i + k <= n)
            {
                reverse(ans.begin() + i, ans.begin() + i + k);
            }
        }
        ListNode *myHead = new ListNode(ans[0]);
        ListNode* heady = myHead;
        for(int i = 1; i < n; i++)
        {
            ListNode* newNode = new ListNode(ans[i]);
            heady->next = newNode;
            heady = newNode;
        }
        return myHead;
    }
};










