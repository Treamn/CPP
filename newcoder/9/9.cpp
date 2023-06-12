#include <iostream>


struct ListNode {
	int val;
	struct ListNode *next;
};
 

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = new ListNode{-1};
        res->next = head;
        ListNode* fast = res;
        ListNode* slow = res;
        ListNode* ans = res;

        for(int i = 0; i < n; i++){
            fast = fast->next;
        }

        while(fast != NULL){
            fast = fast->next;
            ans = slow;
            slow = slow->next;
        }
        // slow->next = slow->next->next;
        ans->next = slow->next;
        return res->next;
    }
};


// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* res = new ListNode{-1};
//         res->next = head;

//         ListNode* pre = res;
//         ListNode* fast = head;
//         ListNode* slow = head;

//         for(int i = 0; i < n; i++){
//             fast = fast->next;
//         }

//         while(fast != NULL){
//             fast = fast->next;
//             pre = slow;
//             slow = slow->next;
//         }

//         pre->next = slow->next;
//         return res->next;
//     }
// };