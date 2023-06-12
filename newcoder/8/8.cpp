#include <iostream>

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* FindKthToTail(ListNode* pHead, int k) {
        ListNode* fast = pHead;
        ListNode* slow = pHead;

        for(int i = 0; i < k; i++){
            if(fast != NULL){
                fast = fast->next;
            }else{
                return slow = NULL;
            }
        }

        while(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};