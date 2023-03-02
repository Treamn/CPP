#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string printBin(double num) {
        string ans = "0.";
        // ans.push_back('0.');

        while(ans.size() < 32 && num != 0){
            num *= 2;
            int x = (int)num;
            ans.push_back('0' + x);
            num -= x;
        }

        // cout << "0." + ans;

        return num != 0 ? "Error" : ans;
    }
};

int main(){
    Solution s1;
    s1.printBin(0.625);

}