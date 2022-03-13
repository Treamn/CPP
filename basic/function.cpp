#include <iostream>
using namespace std;

int Min(int a,int b){
    int min;
    if (a > b)
        min = b;
    else
        min = a;
    return min;
}

int Cycle(int a, int b){
    int min = Min(a,b);
    int max;
    if (min == a)
        max = b;
    else
        max = a;

    for(int i = min; i < max; i++){
        cout<<"This is "<<i<<" times cycle"<<endl;
    }
    return 0;
}

int main(){
    Cycle(2,8);
    return 0;
}