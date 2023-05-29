


#define MAXSIE 100
typedef struct{
    int data[MAXSIE];
    int top1;
    int top2;
}SharedStack;

int Push(SharedStack *s, int e, int stackNumber){
    if(s->top1+1 == s->top2){
        return 0;
    }
    if(stackNumber == 1){
        s->data[++s->top1] = e;
    }else{
        s->data[--s->top2] = e;
    }
}

int Pop(SharedStack *s, int *e, int stackNumber){
    if(stackNumber == 1){
        if(s->top1 == -1){
            return 0;
        }
        *e = s->data[s->top1--];
    }else{
        if(s->top2 == MAXSIE){
            return 0;
        }
        *e = s->data[s->top2++];
    }
}