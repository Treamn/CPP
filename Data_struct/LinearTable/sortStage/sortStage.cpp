#define MAXSIZE 20

typedef int ElemType;
typedef struct{
    ElemType data[MAXSIZE];
    int length;
}SqList;

int GetElem(SqList L, int i, ElemType *e){
    if(L.length == 0 || i < 1 || i > L.length){
        return 0;
    }
    *e = L.data[i-1];
    return  1;
}

int ListInsert(SqList* L, int i, ElemType e){
    if(L->length == MAXSIZE){
        return 0;
    }
    if(i < 1 || i > L->length+1){
        return 0;
    }
}