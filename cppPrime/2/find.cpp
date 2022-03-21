#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    vector<int> v{1,2,3,4};
    int n1 = 3;
    int n2 = 5;
    
    auto res1 = find(begin(v), end(v), n1);
    auto res2 = find(begin(v), end(v), n2);

    (res1 != end(v)) ? cout << "v contains " << n1 << endl : cout << "v does nor contain " << n1 << endl;
    // v contains 3
    (res2 != end(v)) ? cout << "v contains " << n2 << endl : cout << "v does nor contain " << n2 << endl;
    // v does nor contain 5
}