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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* ans = new ListNode();
        ListNode* head = ans;
        int carry =0;
        while(temp1 != nullptr && temp2!=nullptr)
        {
            int sum = temp1->val + temp2->val + carry;
            carry = sum/10;
            ListNode* temp = new ListNode(sum%10);
            ans->next = temp;
            ans = temp;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(temp1==nullptr)
        {
            while(temp2!=nullptr)
            {
                int sum =temp2->val + carry;
                carry = sum/10;
                ListNode* temp = new ListNode(sum%10);
                ans->next = temp;
                ans = temp;
                temp2 = temp2->next;
            }
        }
        if(temp2==nullptr)
        {
            while(temp1!=nullptr)
            {
                int sum = temp1->val+ carry;
                carry = sum/10;
                ListNode* temp = new ListNode(sum%10);
                ans->next = temp;
                ans = temp;
                temp1 = temp1->next;
            }
        }
        if(carry!=0)
        {
            ListNode* temp = new ListNode(carry);
            ans->next = temp;
            ans = temp; 
        }
        return head->next;
    }
};