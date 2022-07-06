#include <iostream>
using namespace std;

double length(double);

int main(){
    cout << "Input long:";
    double lng;
    cin >> lng;
    cout << endl;
    cout << "It is " << length(lng) << " miles" << endl;
    return 0;
}

double length(double lng){
    return lng * 220;
}