#include <iostream>
#include <vector>
#include <unordered_map>
#include <iomanip>
using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list) {
        unordered_map<string , int> map;
        for (int i = 0; i < list.size(); i++){
            map[list[i]] = i;
        }

        for(auto iter = map.begin(); iter != map.end(); ++iter){
            cout << iter->first << std::setw(5) << iter->second << endl;
        }
        
    }
};


int main(){
    Solution ans;
    vector<string> list1 = {"KFC", "Shogun", "Burger King"};
    ans.findRestaurant(list1);
}