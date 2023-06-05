#include <bits/types/clock_t.h>
#include <iostream>
#include "time.h"
int Binary_search(int* a, int n, int key){
    int low, high, mid;
    low = 1;
    high = n;
    while (low < high) {
        mid = (low + high) / 2;
        if(key < a[mid]){
            high = mid-1;
        }else if(key > a[mid]){
            low = mid + 1;
        }else{
            return mid;
        }
    }
    return 0;
}

int main(){
    int a[10]{0,1,2,3,4,5,6,7,8,9};
    clock_t start, end;
    start = clock();
    std::cout << Binary_search(a, 10, 6) << std::endl;
    end = clock();
    std::cout << end - start;

}