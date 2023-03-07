#include <iostream>
using namespace std;

class MyCalendar {
private:
    int datestart, dateend;
public:
    MyCalendar():datestart(0), dateend(0) {

    }
    
    bool book(int start, int end) {
        bool status = false;
        if(datestart == 0 && dateend == 0){
            datestart = start;
            dateend = end;
            status = true;
        }else{
            if(start >= dateend){
                dateend = end;
                status = true;
            }else if(end <= datestart){
                datestart = start;
                status = true;
            }
        }
        return status;

    }
};

