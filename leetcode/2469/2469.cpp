#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans(2);
        ans[0] = celsius + 273.15;
        ans[1] = celsius * 1.80 + 32.00;
        cout << ans[0] << "  " << ans[1];
        return ans;
    }
};


int main(){
    Solution s1;
    s1.convertTemperature(122.11);
}




