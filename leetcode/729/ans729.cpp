#include <iostream>
#include <vector>
using namespace std;

class MyCalendar {
private:
    vector<pair<int, int>> date;
public:
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        for(auto &x : date){
            if(x.first < end && start < x.second){
                return false;
            }
        }
        date.emplace_back(start,end);
        return true;
    }
};


// int main(){
//     vector<vector<int>> vec{{0,1},{2,3},{4,5},{6,7},{8,9}};
//     vector<pair<int,int>> pvec;

//     for(auto &x : vec){
//         // pvec.emplace_back(x[0],x[1]);
//         pvec.push_back(make_pair(x[0],x[1]));
//         // pvec.push_back(x[0], x[1]);
//     }

//     for(auto &x: pvec){
//         cout << x.first << ' ' << x.second << endl;
//     }
// }