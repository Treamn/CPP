#include <iostream>
using namespace std;

class Box{
    private:
        double length;
        double breadth;
        double height;
    public:
        double get(void);
        void set(double len, double bre, double hei);
        Box(double len, double bre, double hei);
        ~Box();
};

// Box::Box(double len, double bre, double hei){
//     length = len;
//     breadth = bre;
//     height = hei;
// }
Box::Box(double len, double bre, double hei): length(len), breadth(bre), height(hei){
    cout << "This is a box!" << endl;
}

double Box::get(void){
    return length * breadth * height;
}

void Box::set(double len, double bre, double hei){
    length = len;
    breadth = bre;
    height = hei;
}

Box::~Box(){
    cout << "Object is being deleted" << endl;
}

int main(){
    Box box(10.0, 10.0, 10.0);
    double volume;
    volume = box.get();
    cout << "box's volume is " << volume << endl;

    box.set(15.0 , 16.5, 20.5);
    volume = box.get();
    cout << "box's volume is " << volume << endl;


}

