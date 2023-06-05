

#include <cstddef>
#include <cstdlib>
struct BiTNode{
    int data;
    BiTNode *lchild, *rchild;
};

typedef BiTNode* BiTree;
//二叉排序树查找
int SearchBST(BiTree T, int key, BiTree f, BiTree *p){
    if(!T){
        *p = f;
        return false;
    }else if(key == T->data){
        *p = T;
        return true;
    }else if(key < T->data){
        return SearchBST(T->lchild, key, T, p);
    }else{
        return SearchBST(T->rchild, key, T, p);
    }
}

//在二叉排序树中插入值
int InsertBST(BiTree *T, int key){
    BiTree p,s;
    if(!SearchBST(*T, key, NULL, &p)){
        s = (BiTree)std::malloc(sizeof(BiTNode));
        s->data = key;
        s->lchild = s->rchild = NULL;
        if(!p){
            *T = s;
        }else if(key < p->data){
            p->lchild = s;
        }else{
            p->rchild = s;
        }
        return true;
    }else{
        return false;
    }
} 

//创建一个二叉排序树
int createeBST(){
    int i;
    int a[10]{62, 88, 58, 47, 35, 73, 51, 99, 47, 93};
    BiTree T = NULL;
    for(i = 0; i < 10; i++){
        InsertBST(&T, a[i]);
    }
}


//删除二叉排序树中的某个节点  

int Delete(BiTree *p){
    BiTree q, s;
    if((*p)->rchild == NULL){
        q = *p;
        *p = (*p)->lchild;
        free(q);
    }else if((*p)->lchild == NULL){
        q = *p;
        *p = (*p)->rchild;
        free(q);
    //左右子树均不为空    
    }else{
        q = *p;
        s = (*p)->lchild;
        while (s->rchild) {
            q = s;
            s = s->rchild;
        }
        (*p)->data = s->data;
        if(q != *p){
            q->rchild = s->lchild;
        }else{
            q->lchild = s->lchild;
        }
        free(s);
    }
    return true;
}


int DeleteBST(BiTree *T, int key){
    if(!*T){
        return false;
    }else{
        if(key == (*T)->data){
            return Delete(T);
        }else if(key < (*T)->data){
            return DeleteBST(&(*T)->lchild, key);
        }else{
            return DeleteBST(&(*T)->rchild, key);
        }
    }
}




