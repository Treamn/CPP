#include <iostream>
// #include <>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int step[n+1];
        step[0] = 1;
        step[1] = 1;
        for(int i = 2; i <= n; i++){
            step[i] = step[i-1] + step[i-2];
        }
        return step[n];
    }
};


int main(){
    Solution s1;
    cout << s1.climbStairs(5);
}