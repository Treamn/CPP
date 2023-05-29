
#define MAXSIZE 1000
typedef int SElemType;
typedef struct{
    SElemType data[MAXSIZE];
    int top;
}SqStack;


int Push(SqStack* s, SElemType e){
    if(s->top == MAXSIZE - 1){
        return 0;
    }
    s->top++;
    s->data[s->top] = e;
    return 1;
}

int Pop(SqStack *s, SElemType* e){
    if(s->top == -1){
        return 0;
    }
    *e = s->data[s->top];
    s->top--;
    return 1;
}