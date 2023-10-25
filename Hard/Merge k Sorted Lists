class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < lists.size(); i++)
        {
            ListNode *temp = lists[i];
            while(temp)
            {
                pq.push(temp->val);
                temp = temp->next;
            }
        }
        if(pq.empty()) return NULL;

        int x = pq.top();
        ListNode* head = new ListNode(pq.top());
        ListNode* ans = head;
        pq.pop();
        while(!pq.empty())
        {
            ListNode* tempNode = new ListNode(pq.top());
            ans->next = tempNode;
            ans = ans -> next;
            pq.pop();
        }
        return head;
    }
};
