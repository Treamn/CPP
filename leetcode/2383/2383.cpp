#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int train = 0;
        int temp = 0;

        for(auto x : energy){
            temp += x;
        }
        if(initialEnergy <= temp){
            train += (temp - initialEnergy) + 1;
        }
        // cout << train << endl;

        temp = initialExperience;
        for(auto x : experience){
            if(temp <= x){
                train += (x - temp + 1);
                temp += (x - temp + 1);
                // cout << (x - temp + 1) << endl;
            }
            temp += x;
        }

        return train;
    }
};

int main(){
    vector<int> energy{1, 1, 1, 1};
    vector<int> experience{1, 1, 1, 50};
    Solution s1;
    cout << s1.minNumberOfHours(1, 1, energy, experience);
}