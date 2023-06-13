#include <bits/c++config.h>
#include <iostream>


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 

class Solution {
public:
    void deleteNode(ListNode* node) {

        node->val = node->next->val;
        node->next = node->next->next;
        // ListNode* res = new ListNode{-1};
        // res->next = node;

        // ListNode* slow = res;
        // ListNode* fast = res;

        // while(fast){}
    }
};