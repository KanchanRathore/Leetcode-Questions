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
       int carry = 0;
       int ans;
       int sum;
           ListNode* res = new ListNode(); 
       while(l1 != NULL || l2!= NULL)
       {
            ans = carry+ l1->val + l2->val;
            l1 = l1->next;
            l2 = l2->next;
            sum = ans%10;
            carry = ans/10;
            ListNode* res = new ListNode(sum);
            res = res->next;
       }
       return res;
    }
};