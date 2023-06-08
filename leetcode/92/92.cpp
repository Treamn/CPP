#include <iostream>
#include <ostream>
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

int main(){
    ListNode* a1 = new ListNode{1};
    ListNode* a2 = new ListNode{2};
    ListNode* a3 = new ListNode{3};
    ListNode* a4 = new ListNode{4};
    ListNode* a5 = new ListNode{5};
    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;
    // a5->next = nullptr;

    ListNode* cur = a1;
    while(cur){
        std::cout << cur->val << " ";
        cur = cur->next;
    }
    std::cout << std::endl;

    Solution s1;
    s1.reverseBetween(a1, 2, 4);

    ListNode* curr = a1;
    while(curr){
        std::cout << curr->val << " ";
        curr = curr->next;
    }
}