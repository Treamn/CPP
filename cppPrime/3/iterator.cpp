#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    // string str = "some string";
    // cout << str << endl;
    // for(auto it = str.begin(); it != str.end() && !isspace(*it); ++it)
    //     *it = toupper(*it);
    // cout << str << endl;
    //以下为使用迭代器实现二分搜索
    int sought;
    vector<int> text;
    for(int i = 0; i != 10; i++)
        text.push_back(i);
    for(auto it : text)
        cout << it << endl;
    
    auto beg = text.begin(), end = text.end();
    auto mid = beg + (end - beg) / 2;
    while(mid != end && *mid != sought)
        if(sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
}