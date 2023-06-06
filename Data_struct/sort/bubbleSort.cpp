#include "sort.h"

void bubble0(SqList *L){
    for(int i = 1; i < L->length; i++){
        for(int j = i+1; j <= L->length; j++){
            if(L->r[i] > L->r[j]){
                swap(L, i, j);
            }
        }
    }
}


void bubble(SqList *L){
    for(int i = 1; i < L->length; i++){
        for(int j = L->length - 1; j >= i; j--){
            if(L->r[j] > L->r[j+1]){
                swap(L, j, j+1);
            }
        }
    }
}


void bubble2(SqList *L){
    bool flag = true;
    for(int i = 1; i < L->length && flag; i++){
        flag = false;
        for(int j = L->length - 1; j >= i; j--){
            if(L->r[j] > L->r[j+1]){
                swap(L, j, j+1);
                flag = true;
            }
        }
    }
}