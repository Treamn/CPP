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
        friend void printinfo(Box box);
};

void printinfo(Box box){
    cout << box.height << endl;
    cout << box.length << endl;
    cout << box.breadth << endl;

}

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
    box.set(12.3, 123.14, 12.31);

    printinfo(box);

    

    return 0;
}

