#include <iostream>
using namespace std;

class Sales_data{
public:
    //非委托构造函数使用对用的实参初始化成员
    Sales_data(std::string s, unsigned cnt, double price):bookNo(s), units_sold(cnt), revenue(cnt*price){}
    //其余构造函数全都委托给另一个构造函数
    Sales_data():Sales_data("", 0, 0){}
    Sales_data(std::string s):Sales_data(s,0,0){}
    Sales_data(std::istream &is): Sales_data(){
        read(is, *this);
    }
};

class NoDefault{
public:
    NoDefault(const std::string&);
};
struct A
{
    NoDefault my_eme;
};
A a;
struct B
{
    B() {}
    NoDefault b_member;
};

