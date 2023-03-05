#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
        int n = customers.size();
        vector<int> line;
        int ans = -1, wait = 0, i = 0;
        // int wait = 0;
        // int lun = 0;

        // for(int i = 0; i < n; i++){
        //     if(i != (n - 1)){
        //         if(customers[i] <= 4){
        //             line.push_back(customers[i]);
        //         }else{
        //             int temp = customers[i] / 4;
        //             for(int j = 0; j < temp; j++){
        //                 line.push_back(4);
        //             }
        //             customers[i + 1] += customers[i] % 4;
        //         }
        //     }else{
        //         while(customers[i]){
        //             if(customers[i] <= 4){
        //                 line.push_back(customers[i]);
        //             }else{
        //                 line.push_back(4);
        //                 customers[i] -= 4;
        //             }
        //         }
        //     }
        // }

        for(auto x : line){
            cout << x << " ";
        }

        return 0;
    }
};

int main(){
    vector<int> v1{10,9,6};
    int boardingCost = 6, runningCost = 4;
    Solution s1;
    s1.minOperationsMaxProfit(v1, boardingCost, runningCost);
    // cout << s1.minOperationsMaxProfit(v1, boardingCost, runningCost);
    return 0;
}

// class Solution {
// public:
//     int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
//         int ans = -1;
//         int lirun = 0;
//         int wait = 0, i = 0;

//         while(wait || i < customers.size()){
//             wait += i < customers.size() ? customers[i] : 0;
//             int up = min(4, wait);
//             wait -= up;
//             ++i;
//             lirun = up * boardingCost - runningCost;
//             if(lirun > 0){
//                 lirun = 0;
//                 ans = i;
//             }
//         }

//         return ans;
//     }
// };


