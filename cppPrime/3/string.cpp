#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    // string str;
    // string longs;
    // while (cin >> str)
    // {
    //     string temp;
    //     temp = str + ' ';
    //     longs += temp;
    //     cout << longs << endl;
    // } getline函数的使用

    // string s("Hello World!");
    // for(auto &c : s)
    //     c = toupper(c);
    // cout << s;
    //使用for循环将字符串所有值大写

    const string hesdigits = "0123456789ABCDEF";
    string result;
    string::size_type n;
    while(cin >> n)
        if(n < hesdigits.size())
            result += hesdigits[n];
            cout << result << endl;

    
    
    return 0;
    
}