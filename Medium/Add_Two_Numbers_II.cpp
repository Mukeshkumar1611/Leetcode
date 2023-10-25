class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        stack<int> s1;
        stack<int> s2;

        ListNode *temp1 = l1;
        while (temp1)
        {
            s1.push(temp1->val);
            temp1 = temp1->next;
        }

        ListNode *temp2 = l2;
        while (temp2)
        {
            s2.push(temp2->val);
            temp2 = temp2->next;
        }
        stack<int> s3;
        int carry = 0;

        while (!s1.empty() && !s2.empty())
        {
            int a = s1.top();
            int b = s2.top();
            int sum = a + b + carry;
            carry = sum / 10;
            int stk = sum % 10;
            s3.push(stk);
            s1.pop();
            s2.pop();
        }

        while (!s1.empty())
        {
            int sum = s1.top() + carry;
            carry = sum / 10;
            int stk = sum % 10;
            s3.push(stk);
            s1.pop();
        }

        while (!s2.empty())
        {
            int sum = s2.top() + carry;
            carry = sum / 10;
            int stk = sum % 10;
            s3.push(stk);
            s2.pop();
        }

        if (carry != 0)
        {
            s3.push(carry);
        }
        ListNode *tempi = new ListNode(-1);
        ListNode *ans = tempi;
        while (!s3.empty())
        {
            int x = s3.top();
            ListNode *newNode = new ListNode(x);
            tempi->next = newNode;
            tempi = tempi->next;
            s3.pop();
        }
        return ans->next;
    }
};
