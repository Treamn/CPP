#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkPalindromeFormation(string a, string b) {
        return check1(a,b) || check1(b,a);
    }


private:
    bool check1(string &a, string &b){
        int i = 0, j = a.size()-1;
        while(i < j && a[i] == b[j]){
            i++;
            j--;
        }
        return i>j || check2(a, i, j) || check2(b , i, j);
    }

    bool check2(string &a, int i, int j){
        while(i <= j && a[i] == a[j]){
            i++;
            j--;
        }
        return i >= j;
    }
};


int main(){
    string a{"abdef"};
    string b{"fecab"};
    Solution s1;
    cout << s1.checkPalindromeFormation(a,b);
}