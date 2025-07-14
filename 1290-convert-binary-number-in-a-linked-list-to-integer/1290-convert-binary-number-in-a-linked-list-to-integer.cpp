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
    int getDecimalValue(ListNode* head) {
     stack<int>v;
      while(head != nullptr)
      {
          v.push(head->val);
          head = head->next;
      }
       int base = 1;
       int digit = 0;
      
       while(!v.empty())
       {
          int num = v.top();
          digit = digit+num*base;
          base = base*2;
          v.pop();
       }

       return digit;
       
    }
};