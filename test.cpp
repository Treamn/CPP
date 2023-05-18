// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
//         int n = customers.size();
//         vector<int> line;
//         int ans = 0;
//         // int wait = 0;
//         // int lun = 0;

//         for(int i = 0; i < n; i++){
//             if(i != (n - 1)){
//                 if(customers[i] <= 4){
//                     line.push_back(customers[i]);
//                 }else{
//                     int temp = customers[i] / 4;
//                     for(int j = 0; j < temp; j++){
//                         line.push_back(4);
//                     }
//                     customers[i + 1] += customers[i] % 4;
//                 }
//             }else{
//                 while(customers[i]){
//                     if(customers[i] <= 4){
//                         line.push_back(customers[i]);
//                     }else{
//                         line.push_back(4);
//                         customers[i] -= 4;
//                     }
//                 }
//             }
//         }

//         for(auto x : line){
//             cout << x << " ";
//         }
//     }
// };


// int main(){
//         vector<int> customers{10,9,6};
//         int n = customers.size();
//         vector<int> line;
//         int ans = 0;
//         // int wait = 0;
//         // int lun = 0;

//         for(int i = 0; i < n; i++){
//             if(i != (n - 1)){
//                 if(customers[i] <= 4){
//                     line.push_back(customers[i]);
//                 }else{
//                     int temp = customers[i] / 4;
//                     for(int j = 0; j < temp; j++){
//                         line.push_back(4);
//                     }
//                     customers[i + 1] += customers[i] % 4;
//                 }
//             }else{
//                 while(customers[i]){
//                     if(customers[i] <= 4){
//                         line.push_back(customers[i]);
//                     }else{
//                         line.push_back(4);
//                         customers[i] -= 4;
//                     }
//                 }
//             }
//         }

//         for(auto x : line){
//             cout << x << " ";
//         }
//     return 0;
// }

#include<iostream>
#include <ostream>

int main(){
    int i = 10, j = 10;
    std::cout << i++ << " " << ++j << std::endl;
    std::cout << i << " " << j;
}