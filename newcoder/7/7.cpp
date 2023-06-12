#include <iostream>



struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

class Solution {
public:

    ListNode* hasCycle(ListNode *head) {
        if(head == NULL){
            return NULL;
        }

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return slow;
            }
        }

        return NULL;
    }


    ListNode* EntryNodeOfLoop(ListNode* pHead) {
        ListNode* slow = hasCycle(pHead);

        if(slow == NULL){
            return NULL;
        }

        ListNode* fast = pHead;
        while(fast != slow){
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};