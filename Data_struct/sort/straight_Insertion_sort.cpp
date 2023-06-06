#include "sort.h"

void InsertSort(SqList *L){
    int j;
    for(int i = 2; i <= L->length; i++){
        if(L->r[i] < L->r[i-1]){
            L->r[0] = L->r[i];
            for(j = i-1; L->r[j] > L->r[0]; j--){
                L->r[j+1] = L->r[j];
            }
            L->r[j+1] = L->r[0];
        }
    }
}