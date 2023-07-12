#include <iostream>
#include <string>
using namespace std;

// class Solution {
// public:
//     int alternateDigitSum(int n) {
//         int sum = 0, sign = 1;
        
//         for(char c : to_string(n)){
//             int x = c - '0';
//             sum += sign * x;
//             sign *= -1;
//         }
//         cout << "sum is: " << sum << endl;
//         return sum;
        
//     }
// };

class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        string s1 = to_string(n);
        
        for(int i = 0; i < s1.size(); i++){
            int x = s1[i] - '0';
            if(i % 2 == 0){
                sum += x;
            }else{
                sum -= x;
            }
        }
        cout << "sum is: " << sum << endl;
        return sum;
        
    }
};


int main(){
    int n = 521;
    Solution s1;
    s1.alternateDigitSum(n);
}