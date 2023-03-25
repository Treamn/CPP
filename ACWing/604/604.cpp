#include <iostream>
#include <iomanip>
using namespace std;

double area(double &r){
    const double pi = 3.14159;
    double s = pi * r * r;
    cout << "A=" << fixed << setprecision(4) << s;
    return s;
}

int main(){
    double r;
    cin >> r;
    area(r);
}