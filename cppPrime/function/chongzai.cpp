#include <iostream>
using namespace std;

// void print(const char *cp);
void print(const int *beg, const int *end);
void print(const int ia[], size_t size);

int main(){
    // print("Hello World");
    int j[2] = {0,1};
    int i[5] = {2,4,7,4,8};
    print(j, end(j) - begin(j));
    print(begin(i), end(i));

    return 0;
}