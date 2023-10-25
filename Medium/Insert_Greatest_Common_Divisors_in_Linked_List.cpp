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
private:
    int gcd(int a, int b)
    {
        // Find Minimum of a and b
        int result = min(a, b);
        while (result > 0) {
            if (a % result == 0 && b % result == 0) {
                break;
            }
            result--;
        }

        // Return gcd of a and b
        return result;
    }
    
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<int> v1;
        ListNode* temp = head;
        while(temp)
        {
            v1.push_back(temp->val);
            temp = temp -> next;
        }
        
        if(v1.size() <= 1) return head;
        vector<int> ans;
        vector<int> gc;
        for(int i = 1; i < v1.size(); i++)
        {
            int g = gcd(v1[i], v1[i-1]);
            gc.push_back(g);
        }
        int k = 0;
        for(int i = 0; i < v1.size(); i++)
        {
            ans.push_back(v1[i]);
            if(k < v1.size() - 1)
            {
                ans.push_back(gc[k++]);
            }
        }
        
        ListNode* heady = new ListNode(ans[0]);
        ListNode*tempy = heady;
        for(int i = 1; i < ans.size(); i++)
        {
            ListNode* mylis = new ListNode(ans[i]);
            tempy->next = mylis;
            tempy = tempy->next;
        }
        return heady;
        
    }
};
