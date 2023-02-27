#include <iostream>
using namespace  std;

class circle{
private:
    mutable float d;

public:
    circle(float dd);
    float length();
    float area();
};

// circle::circle(float dd){
//     d = dd;
// }

circle::circle(float dd): d(dd){};

float circle::length(){
    float l = 3.14*d*2;
    return l;
}

float circle::area(){
    float s = 3.14*d*d;
    return s;
}

int main(){
    circle c{2};
    circle c1 = circle{5};
    // const circle c1{3};
    cout << "length is : " << c1.length() << endl;
    cout << "area is : " << c1.area() << endl;
    return 0;
}