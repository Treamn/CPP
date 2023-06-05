
#include <iostream>
int Sequential_Search(int *a, int n, int key){
    for(int i = 1; i <= n; i++){
        if(a[i] == key){
            return i;
        }
    }
    return 0;
}


int Sequential_Search2(int *a, int n, int key){
    int i = n;
    a[0] = key;
    while (a[i] != key) {
        i--;
    }
    return i;
}


int main(){
    int a[10]{0,1,2,3,4,5,6,7,8,9};
    std::cout << Sequential_Search2(a, 10, 6);
}