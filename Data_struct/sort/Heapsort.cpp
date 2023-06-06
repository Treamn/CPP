#include "sort.h"


//将一个序列调整为大顶堆
void HeapAdjust(SqList *L, int s, int m){
    int temp, j;
    temp = L->r[s];
    for(j = 2*s; j <= m; j *= 2){
        if(j < m && L->r[j] < L->r[j+1]){
            ++j;
        }
        if(temp >= L->r[j]){
            break;
        }
        L->r[s] = L->r[j];
        s = j;
    }
    L->r[s] = temp;
}

//进行排序  
void HeapSort(SqList *L){
    int i;
    //将序列调整为大顶堆
    for(i = L->length/2; i > 0; i--){
        HeapAdjust(L, i, L->length);
    }

    
    for(i = L->length; i > 1; i--){
        swap(L, 1, i);
        HeapAdjust(L, 1, i-1);
    }
}