#include <iostream>
using namespace std;

class Box{
    public:
        double length;
        double breadth;
        double height;
        double get(void);
        void set(double len, double bre, double hei);
};

double Box::get(void){
    return length * breadth * height;
}

void Box::set(double len, double bre, double hei){
    length = len;
    breadth = bre;
    height = hei;
}
int main(){
    Box box;
    double volume;

    box.set(15.0 , 16.5, 20.5);
    volume = box.get();
    cout << "box's volume is " << volume << endl;

}

