#include <iostream>



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rl1 = reverse(l1);
        ListNode* rl2 = reverse(l2);

        ListNode* ans = new ListNode();
        ListNode* cur = ans;

        int carry = 0;
        while (rl1 || rl2 || carry){
            if(rl1){
                carry += rl1->val;
            }
            if(rl2){
                carry += rl2->val;
            }

            cur = cur->next = new ListNode(carry % 10);
            carry /= 10;
            if(rl1){
                rl1 = rl1->next;
            }
            if(rl2){
                rl2 = rl2->next;
            }
        }
        return reverse(ans->next);
        
    }


    ListNode* reverse(ListNode* head){
        ListNode* pre = nullptr;
        ListNode* cur = head;
        ListNode* nex = nullptr;

        while (cur) {
            nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        return pre;
    }
};