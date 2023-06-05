#include <iostream>


typedef enum {Link, Thread} PoniterTag;

typedef struct BiThrNode{
    int data;
    struct BiThrNode *lchild, *rchild;
    PoniterTag LTag;
    PoniterTag RTag;
}BiThrNode, *BiThrTree;


//线索化线索二叉树
BiThrTree pre;

void InThreading(BiThrTree p){
    if(p){
        InThreading(p->lchild);
        if(!p->lchild){
            p->LTag = Thread;
            p->lchild = pre;
        }
        if(!pre->rchild){
            pre->RTag = Thread;
            pre->rchild = p;
        }
        pre = p;
        InThreading(p->rchild);
    }
}


int InorderTraverse_Thr(BiThrTree T){
    BiThrTree p;
    p = T->lchild;

    while(p != T){
        while (p->LTag == Link) {
            p = p->lchild;
            
        }
        std::cout << p->data;
        while(p->RTag == Thread && p->rchild != T){
            p = p->rchild;
            std::cout << p->data;
        }
        p = p->rchild;
    }
    return 1;
}