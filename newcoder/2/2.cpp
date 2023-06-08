#include <iostream>


struct ListNode {
	int val;
	struct ListNode *next;
};


class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* res = new ListNode{-1};
        res->next = head;

        ListNode* pre = res;
        ListNode* cur = head;

        for(int i = 1; i < m; i++){
            pre = cur;
            cur = cur->next;
        }

        for(int i = m; i < n; i++){
            ListNode* temp = cur->next;
            cur->next = temp->next;
            temp->next = pre->next;
            pre->next = temp;
        }
        return res->next;

    }
};