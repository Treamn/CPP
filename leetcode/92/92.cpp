#include <iostream>
//  * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* res = new ListNode(-1);
        res->next = head;

        ListNode* pre = res;
        ListNode* cur = head;

        for(int i = 1; i < left; i++){
            pre = cur;
            cur = cur->next;
        }

        for(int i = left; i < right; i++){
            ListNode* temp = cur->next;
            cur->next = temp->next;
            temp->next = pre->next;
            pre->next = temp;
        }
        return res->next;

    }
};