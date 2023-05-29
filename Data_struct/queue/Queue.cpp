
#include <algorithm>
#define MAXSIZE 100
typedef struct{
    int data[MAXSIZE];
    int front;
    int rear;
}sQueue;

int InitQueue(sQueue* Q){
    Q->front = 0;
    Q->rear = 0;
    return 1;
}

int QueueLength(sQueue Q){
    return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

int EnQueue(sQueue* Q, int e){
    if((Q->rear + 1) % MAXSIZE == Q->front){
        return 0;
    }
    Q->data[Q->rear] = e;
    Q->rear = (Q->rear+1) % MAXSIZE;
    return 1;
}

int DeQueue(sQueue* Q, int *e){
    if(Q->rear == Q->front){
        return 0;
    }
    *e = Q->data[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE;
    return 1;
}
