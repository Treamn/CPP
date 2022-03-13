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
        bool compare(Box box);
};

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

bool Box::compare(Box box){
    return this->length > box.length;
}

int main(){
    Box box1(10.0, 10.0, 10.0);
    Box box2(21.3, 32.2, 32.4);

    if(box1.compare(box2)){
        cout << "box1 longer" << endl;
    }else{
        cout << "box 2 longer" << endl;
    }
    return 0;
}

