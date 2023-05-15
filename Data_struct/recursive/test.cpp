#include <iostream>

int sum(int end){
    if(end < 1){
        return 0;
    }else{
        return sum(end-1) + end;
    }
}

int main(){
    std::cout << sum(4);
}