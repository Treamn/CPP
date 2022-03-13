#include <iostream>
#include<typeinfo>
using namespace std;

int main()
{
    float a = 12.0;
    cout<<typeid(a).name()<<endl;
    cout<<a<<endl;

    string s = "This is a test text!";
    cout<<typeid(s).name()<<endl;
    cout<<s<<endl;

    return 0;
}