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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> temp;
        ListNode* newHead = head;
        while(newHead)
        {
            temp.push_back(newHead->val);
            newHead = newHead->next;
        }
        vector<int> ans;
        int sum = 0;
        for(int i = 1; i < temp.size(); i++)
        {
            if(temp[i] == 0)
            {
                ans.push_back(sum);
                sum = 0;
            }
            sum += temp[i];
        }
        ListNode* myHead = new ListNode(ans[0]);
        ListNode* myTemp = myHead;
        for(int i = 1; i < ans.size(); i++)
        {
            ListNode* newListNode = new ListNode(ans[i]);
            myTemp->next = newListNode;
            myTemp = myTemp->next;
        }
        return myHead;
    }
};
