#include <ctime>
#include <iostream>
using namespace std;

int main(){
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << dt << endl;

    tm *ltm = localtime(&now);
    cout << ltm->tm_year <<endl;
    return 0;
}