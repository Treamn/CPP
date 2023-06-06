#include "sort.h"

int Partition(SqList *L, int low, int high){
    int pivotkey;


    int m = low + (high - low) / 2;
    if(L->r[low] > L->r[high]){
        swap(L, low, high);
    }
    if(L->r[m] > L->r[high]){
        swap(L, high, m);
    }
    if(L->r[m] > L->r[low]){
        swap(L, m, low);
    }


    pivotkey = L->r[low];

    L->r[0] = pivotkey;


    while(low < high){
        while(low < high && L->r[high] >= pivotkey){
            high--;
        }
        // swap(L, low, high);
        L->r[low] = L->r[high];


        while(low < high && L->r[low] <= pivotkey){
            low++;
        }
        // swap(L, low, high);
        L->r[high] = L->r[low];
    }
    L->r[low] = L->r[0];

    
    return low;
}


void Qsort(SqList *L, int low, int high){
    int pivot;
    if(low < high){
        pivot = Partition(L, low, high);
        Qsort(L, low, pivot-1);
        Qsort(L, pivot+1, high);
    }
}

void QuichSort(SqList *L){
    Qsort(L, 1, L->length);
}