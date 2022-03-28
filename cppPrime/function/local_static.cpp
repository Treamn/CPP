#include <iostream>
using namespace std;

size_t count_calls(){
    static size_t ctr = 0;
    return ++ctr;
}

int main(){
    for(size_t i = 0; i != 10; ++i){
        count_calls();
    }
    cout << count_calls();
    return 0;
}