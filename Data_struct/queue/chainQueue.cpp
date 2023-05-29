


#include <cstdlib>
#include <stdexcept>
typedef struct QNode{
    int data;
    struct QNode *next;
}QNode, *QueuePtr;

typedef struct{
    QueuePtr front, rear;
}LinkQueue;


int EnQueue(LinkQueue* Q, int e){
    QueuePtr s = (QueuePtr)malloc(sizeof(QNode));
    if(!s){
        return 0;
    }
    s->data = e;
    s->next = NULL;
    Q->rear->next = s;

    Q->rear = s;
    return 1;
}

int DeQueue(LinkQueue *Q, int *e){
    QueuePtr p;
    if(Q->front = Q->rear){
        return 0;
    }
    p = Q->front->next;
    *e = p->data;
    Q->front->next = p->next;

    if(Q->rear == p){
        Q->rear = Q->front;
    }
    free(p);
    return 1;
}