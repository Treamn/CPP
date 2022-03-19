#include <iostream>
#include <vector>
using namespace std;

int main(){
//     vector<int> vec;
//     for(int i = 0 ; i != 100; i++)
//         vec.push_back(i);

//     for(int i = 0; i != vec.size(); i++)
//         cout << vec[i] << ' ';
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        if(grade <= 100)
            ++scores[grade/10];
    }
    
}