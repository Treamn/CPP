#include <bits/c++config.h>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>
#include<limits>
using namespace std;

void merge(int* _elem, int left, int mid,int right){

    int* A = _elem + left;

    int lb = mid - left;
    int* B = new int[lb]{};
    for(int i = 0; i < lb; B[i] = A[i++]);

    int lc = right - mid;
    int* C = _elem + mid;

    for(int i = 0, j = 0, k = 0; (j < lb) || (k < lc); ){
        if((j < lb) && ( !(k < lc) || (B[j] <= C[k]))){
            A[i++] = B[j++];
        }
        if((k < lc) && ( !(j < lb) || (C[k] < B[j]))){
            A[i++] = C[k++];
        }
    }
    delete[] B;
}

void mergesort(int* _elem, int left, int right){
    if(right - left < 2){
        return;
    }
    int mid = (left + right) / 2;
    mergesort(_elem, left, mid);
    mergesort(_elem, mid, right);
    merge(_elem, left, mid, right);
}

int main(){
    int vec[]{7,4,6,3,2,5,1,8};
    mergesort(vec, 0, 7);
    for(int i = 0; i < 8; i++){
        cout << vec[i] << ' ';
    }
}



// void Merge(vector<int> &Array, int front, int mid, int end) {
//     // preconditions:
//     // Array[front...mid] is sorted
//     // Array[mid+1 ... end] is sorted
//     // Copy Array[front ... mid] to LeftSubArray
//     // Copy Array[mid+1 ... end] to RightSubArray
//     vector<int> LeftSubArray(Array.begin() + front, Array.begin() + mid + 1);
//     vector<int> RightSubArray(Array.begin() + mid + 1, Array.begin() + end + 1);
//     int idxLeft = 0, idxRight = 0;
//     LeftSubArray.insert(LeftSubArray.end(), numeric_limits<int>::max());
//     RightSubArray.insert(RightSubArray.end(), numeric_limits<int>::max());
//     // Pick min of LeftSubArray[idxLeft] and RightSubArray[idxRight], and put into Array[i]
//     for (int i = front; i <= end; i++) {
//         if (LeftSubArray[idxLeft] < RightSubArray[idxRight]) {
//             Array[i] = LeftSubArray[idxLeft];
//             idxLeft++;
//         } else {
//             Array[i] = RightSubArray[idxRight];
//             idxRight++;
//         }
//     }
//     for(auto &x : Array){
//         cout << x << " ";
//     }
//     cout << endl;
// }

// void MergeSort(vector<int> &Array, int front, int end) {
//     if (front >= end)
//         return;
//     int mid = (front + end) / 2;
//     MergeSort(Array, front, mid);
//     MergeSort(Array, mid + 1, end);
//     Merge(Array, front, mid, end);
// }

// int main(){
//     vector<int> vec{7,4,6,3,2,5,1,8};
//     MergeSort(vec, 0, vec.size()-1);
// }