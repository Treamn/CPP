#include <iostream>
using namespace std;


class brid{
    protected:
        int swing;
        int feet;
    public:
        int set(int f, int s){
            feet = f;
            swing = s;
        }
        void get(){
            cout << feet << endl;
            cout << swing << endl;
        }

};

class gugu{
    public:
        void sound(){
            cout << "he's sound is gugugu" << endl;
        }
};


class swan: public gugu, public brid{
    public:
        void info(){
            cout << "I'm a swan." << endl;
        }
        ~swan(){
            cout << "object has been deleted!" << endl;
        }
};



int main(void){
    swan wade;
    wade.set(2,2);
    wade.get();
    wade.sound();
    wade.info();
    return 0;
}