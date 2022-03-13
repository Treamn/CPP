#include <iostream>
#include<typeinfo>
using namespace std;

int main()
{
    float a = 12.0;
    cout<<typeid(a).name()<<endl;
    cout<<a;
    return 0;
}