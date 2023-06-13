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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = new ListNode{-1};
        res->next = head;
        ListNode* pre = res;
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i = 0; i < n; i++){
            fast = fast->next;
        }

        while(fast != NULL){
            fast = fast->next;
            pre = slow;
            slow = slow->next;
        }

        pre->next = slow->next;
        return res->next;
    }
};