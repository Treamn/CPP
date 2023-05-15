#include <bits/c++config.h>
#include <cstddef>
#include <ios>
#include<iostream>
#include <type_traits>
#include <vector>
using namespace std;

void bubblesort(vector<int> vec){
    for(int i = 1; i < vec.size(); i++){
        for(int j = 1; j < vec.size(); j++){
            if(vec[j-1] > vec[j]){
                std::swap(vec[j-1], vec[j]);
            }

            for(auto& x: vec){
                std::cout << x << " ";
            }
            std::cout << std::endl;
        }
    }
}

int main(){
    vector<int> vec{2,6,3,9,5,7,4,1};
    bubblesort(vec);
}



// void bubblesort(int A[], int n){
//     bool status = false;
//     while(!status){
//         status = true;
//         for(int i = 1; i < n; i++){
//             if(A[i-1] > A[i]){
//                 std::swap(A[i-1], A[i]);
//                 status = false;
//             }
//         }
//         n--;
//     }
// }


// int main(){
//     int nums[]{4,2,7,3,9,5,1};
//     int n = 7;
//     bubblesort(nums, n);
// }