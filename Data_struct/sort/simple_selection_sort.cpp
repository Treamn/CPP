#include "sort.h"

void selectSort(SqList *L){
    int min;
    for(int i = 1; i < L->length; i++){
        min = i;
        for(int j = i+1; j <= L->length; j++){
            if(L->r[min] > L->r[j]){
                min = j;
            }
        }
        if(i != min){
            swap(L, i, min);
        }
    }
}