#include <iostream>
using namespace std;

void display(int hr, int min){
    cout << "Time: " << hr << ":" << min;
}

int main(){
    int hr,min;
    cout << "Enter the number of hours: ";
    cin >> hr;
    cout << "Enter the number of minutes: ";
    cin >> min;
    display(hr,min);
    return 0;
}