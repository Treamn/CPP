#include <iostream>



struct ListNode {
    int val;
	struct ListNode *next;
};


class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* res = new ListNode{-1};
        res->next = head;

        ListNode* pre = res;
        ListNode* cur = head;
    }
};