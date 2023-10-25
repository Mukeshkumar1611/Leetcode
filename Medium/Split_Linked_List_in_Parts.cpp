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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<int> nums;
        
        ListNode*temp = head;
        while(temp)
        {
            nums.push_back(temp->val);
            temp = temp -> next;
        }
        int n = nums.size();

        vector<ListNode*> ans;
        int ptr = 0;

        for(int j = 0; j < k; j++)
        {
            ListNode* v1 = new ListNode();
            ListNode*tempHead = v1;

            if(j < n % k)
            {
                int size = (n / k) + 1;
                for(int i = 0; i < size && ptr < nums.size(); i++)
                {
                    ListNode* newNode = new ListNode(nums[ptr++]);
                    v1->next = newNode;
                    v1 = v1->next;
                }
                v1->next = NULL;
            }
            else
            {
                int size = n / k;
                for(int i = 0; i < size && ptr < nums.size(); i++)
                {
                    ListNode* newNode = new ListNode(nums[ptr++]);
                    v1->next = newNode;
                    v1 = v1->next;
                }
                v1->next = NULL;
            }
            ans.push_back(tempHead->next);
        }
        return ans;
    }
};
