

#include <cstdlib>
typedef struct StackNode{
    int data;
    struct StackNode *next;
}StackNode, *LinkStackPtr;

typedef struct LinkStack{
    LinkStackPtr top;
    int count;
}LinkStack;

int Push(LinkStack *S, int e){
    LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
    s->data = e;
    s->next = S->top;
    S->top = s;
    S->count++;
    return 1;
}

int Push(LinkStack *S, int *e){
    LinkStackPtr p;
    *e = S->top->data;
    p = S->top;
    S->top = S->top->next;
    free(p);
    S->count--;
    return 1;
}