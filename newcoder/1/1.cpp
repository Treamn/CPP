#include <algorithm>
#include <iostream>
#include <vector>

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};


class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* pre = nullptr;
        ListNode* cur = pHead;
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


// class Solution {
// public:
//     ListNode* ReverseList(ListNode* pHead) {
//         if(!pHead){
//             return nullptr;
//         }

//         std::vector<ListNode*> v;
//         while (pHead) {
//             v.push_back(pHead);
//             pHead = pHead->next;
//         }
        
//         std::reverse(v.begin(), v.end());
//         ListNode* nHead = v[0];
//         ListNode* cur = nHead;
//         for(int i = 1; i < v.size(); i++){
//             cur->next = v[i];
//             cur = cur->next;
//         }
//         cur->next = nullptr;
//         return nHead;
//     }
// };
