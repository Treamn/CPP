#include <iostream>
using namespace std;

class animal{
    protected:
        int feet;
    public:
        animal(int f):feet(f){}
        virtual int get() = 0;
};

class dog: public animal{
    public:
        dog(int f):animal(f){}
        int get(){
            cout << "dog has " << feet << " feets." << endl;
            return 0;
        }
};

class swan: public animal{
    protected:
        int swing;
    public:
        swan(int s, int f):animal(f),swing(s){}
        int get(){
            cout << "swan has " << feet << " feets ";
            cout << "and " << swing << " swings" << endl;
            return 0;
        }
};



int main(void){
    animal *cute;
    dog wangcai(4);
    swan se(2,2);
    cute = &wangcai;
    cute->get();

    cute = &se;
    cute->get();
    // animal cute;
    return 0;
}