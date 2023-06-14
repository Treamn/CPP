#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// class Solution {
// public:
//     int numTimesAllBlue(vector<int>& flips) {
//         int ans = 0;
//         int n = flips.size();
//         vector<int> temp(n,0);

//         for(int i = 0; i < n; i++){
//             temp[flips[i]-1] = 1;
//             int flag = 1;

//             // for(auto x : temp){
//             //     cout << x;
//             // }
//             // cout << endl;

//             for(int j = 0; j < i+1; j++){
//                 if(temp[j] != 1){
//                     flag = 0;
//                 }
//             }
//             // cout << flag << endl;
//             ans += flag;
//         }

//         return ans;
//     }
// };


class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int ans = 0;
        int n = flips.size();
        int max = 0;

        for(int i = 0; i < n; i++){
            max = std::max(max,flips[i]);
            ans += max == i+1;
        }
        return ans;
    }
};

int main(){
    vector<int> v{4,1,2,3};
    Solution s1;
    cout << s1.numTimesAllBlue(v);
}