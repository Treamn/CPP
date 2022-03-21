#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    vector<int> v{1,2,3,4,5};
    fill_n(back_inserter(v), 3, -1);
    for(auto i : v)
        cout << i << " ";  // 1,2,3,4,5,-1,-1,-1

}