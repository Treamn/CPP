//二叉树的表示   


#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <iostream>


typedef struct BiTNode{
    int data;
    BiTNode *lchild, *rchild;
}BiTNode, *BiTree;


//前序遍历
void PreOrderTraverse(BiTree T){
    if(T == NULL){
        return ;
    }
    std::cout << T->data;
    PreOrderTraverse(T->lchild);
    PreOrderTraverse(T->rchild);
}


//中序遍历
void InOrderTraverse(BiTree T){
    if( T == NULL){
        return;
    }
    InOrderTraverse(T->lchild);
    std::cout << T->data;
    InOrderTraverse(T->rchild);
}


//后序遍历
void PostOrderTraverse(BiTree T){
    if(T == NULL){
        return ;
    }
    PostOrderTraverse(T->lchild);
    PostOrderTraverse(T->rchild);
    std::cout << T->data;
}

void CreateBiTree(BiTree *T){
    char ch;
    std::cin >> ch;
    if(ch == '#'){
        *T = NULL;
    }else{
        *T = (BiTree)malloc(sizeof(BiTNode));
        if(!*T){
            throw "OVERFLOW";
        }
        (*T)->data = ch;
        CreateBiTree(&(*T)->lchild);
        CreateBiTree(&(*T)->rchild);
    }
}