#include <iostream>
using namespace std;

double convert(double temp){
    return (1.8 * temp) + 32;
}

int main(){
    cout << "Please enter a Celsius value: ";
    double temp;
    cin >> temp;
    cout << endl;
    cout << temp << " degrees Celsius is " << convert(temp) << " degrees Fahrenheit.";
    return 0;
}

