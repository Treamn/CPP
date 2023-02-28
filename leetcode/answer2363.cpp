#include <iostream>
#include<vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> v;
        int arr[1001]{};

        for(auto x : items1){
            arr[x[0]] += x[1];
        }
        for(auto x : items2){
            arr[x[0]] += x[1];
        }

        for(int i = 0; i < 1001; i++){
            if(arr[i]){
                v.push_back({i,arr[i]});
            }
        }

        for(auto x : v){
            cout << x[0] << x[1] << endl;
        }

        return v;

    }
};




int main(){
    vector<vector<int>> v1{{5,1},{4,2},{3,3},{2,4},{1,5}};
    vector<vector<int>> v2{{7,1},{6,2},{5,3},{4,4}};
    Solution s1;
    s1.mergeSimilarItems(v1,v2);
}