#include <iostream>

struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0), next(nullptr){}
    ListNode(int a): val(a), next(nullptr){}
};



class MyLinkedList {
private:
    int _size;
    ListNode* head;

public:
    MyLinkedList() {
        head = new ListNode{0};
        _size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index > _size){
            return -1;
        }

        ListNode* cur = head->next;
        for(int i = 0; i < index; i++){
            cur = cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        ListNode* temp = new ListNode(val);
        temp->next = head->next;
        head->next = temp;
        _size++;
    }
    
    void addAtTail(int val) {
        ListNode* tail = head->next;
        for(int i = 0; i < _size; i++){
            tail = tail->next;
        }
        ListNode* temp = new ListNode{val};
        tail->next = temp;
        _size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index == _size-1){
            addAtTail(val);
        }
        if(index > _size-1){
            return ;
        }

        ListNode* fast = head->next;
        ListNode* slow = head->next;
        for(int i = 0; i < index; i++){
            slow = fast;
            fast = fast->next;
        }
        ListNode* temp = new ListNode{val};
        temp->next = fast;
        slow->next = temp;
    }
    
    void deleteAtIndex(int index) {
        if(index > _size-1){
            return ;
        }

        ListNode* fast = head->next;
        ListNode* slow = head->next;
        for(int i = 0; i < index; i++){
            slow = fast;
            fast = fast->next;
        }
        slow->next = fast->next;
    }
};

