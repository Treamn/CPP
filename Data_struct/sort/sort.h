#define MAXSIZE 10
struct SqList{
    int r[MAXSIZE+1];
    int length;
};

void swap(SqList *L, int i, int j){
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] = temp;
}