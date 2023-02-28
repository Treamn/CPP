#include <iostream>
#include<vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int length = items1.size() + items2.size();
        vector<vector<int>> v;
        int arr[length][2];

        if(items1.size() > items2.size()){
            for(int i = 0; i < items1.size(); i++){
                int status = 0;
                for(int j = 0; j < items2.size(); j++){
                    if(items1[i][0] == items2[j][0]){
                        arr[i][0] = items1[i][0];
                        arr[i][1] = items1[i][1] + items2[j][1];
                    }else{
                        status++;
                    }
                }
                if(status == items2.size()){
                    arr[i][0] = items1[i][0];
                    arr[i][1] = items1[i][1];
                }
            }
        }else{
            for(int i = 0; i < items2.size(); i++){
                int status = 0;
                for(int j = 0; j < items1.size(); j++){
                    if(items2[i][0] == items1[j][0]){
                        arr[i][0] = items2[i][0];
                        arr[i][1] = items2[i][1] + items1[j][1];
                    }else{
                        status++;
                    }
                }
                if(status == items1.size()){
                    arr[i][0] = items2[i][0];
                    arr[i][1] = items2[i][1];
                }
            }
        }

        for(int i = 0; i < length; i++){
            if(arr[i][0]){
                vector<int> temp;
                temp.push_back(arr[i][0]);
                temp.push_back(arr[i][1]);
                v.push_back(temp);
            }
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < length; i++){
            std::cout << v[i][0] << v[i][1] << endl;
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