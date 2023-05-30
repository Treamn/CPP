


typedef enum {Link, Thread} PoniterTag;

typedef struct BiThrNode{
    int data;
    struct BiThrNode *lchild, *rchild;
    PoniterTag LTag;
    PoniterTag RTag;
}BiThrNode, *BiThrTree;


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