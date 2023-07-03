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

        ListNode* ans = nullptr;

        while(rl1->next != nullptr || rl2->next != nullptr){
            if(rl1->next == nullptr){
                if((rl1->val + rl2->val) % 10 == 1){
                    rl2->val += (rl1->val + rl2->val) % 10;
                    rl2->next->val += 1;
                }
                ans->next = rl2;
                break;
            }else if(rl2->next == nullptr){
                if((rl1->val + rl2->val) % 10 == 1){
                    rl1->val += (rl1->val + rl2->val) % 10;
                    rl1->next->val += 1;
                }
                ans->next = rl1;
                break;
            }

            if((rl1->val + rl2->val) % 10 == 1){
                rl1->val += (rl1->val + rl2->val) % 10;
                rl1->next->val += 1;
            }

            ans->next = rl1;
            rl1 = rl1->next;
            rl2 = rl2->next;
        }

        ListNode* res = reverse(ans);
        return res;
    }


    Listnode* reverse(ListNode* head){
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