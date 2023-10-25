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
    ListNode* doubleIt(ListNode* head) {
        vector<int> arr1;
        ListNode* tempy = head;
        while(tempy)
        {
            arr1.push_back(tempy->val);
            tempy = tempy -> next;
        }
        
        vector<int> arr2 = arr1;
        
        int carry = 0;
        int n1 = arr1.size();
        int n2 = n1;
        int n3 = n1 + 1;
        vector<int> ans(n1 + 1, -1);

        int i = n1 - 1;
        int j = n2 - 1;
        int k = n3 - 1;

        while (k >= 0)
        {
            int digit = carry;

            if (i >= 0)
            {
                digit = digit + arr1[i];
            }

            if(j >=0)
            {
                digit = digit + arr2[j];
            }

            carry = digit / 10;
            digit = digit % 10;

            ans[k] = digit;

            i--;
            j--;
            k--;
        }

    // cout << "Sum of Array1 and Array2 : " << endl;

    if(carry != 0){
        ans[0] = carry;
        
    }

    ListNode* newHead = new ListNode(ans[0]);
    ListNode* temp = newHead;
        
        for(int i = 1; i < ans.size(); i++)
        {
            ListNode* tempNode = new ListNode(ans[i]);
            temp->next = tempNode;
            temp = temp->next;
        }
        if(ans[0] == 0) return newHead->next;
        return newHead;

        
    }
};
