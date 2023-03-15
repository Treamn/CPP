#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> cnt;
        vector<vector<int>> g(n, vector<int>(n, 0));

        for(auto &r : roads){
            int a = r[0], b = r[1];
            g[a][b] = g[b][a] = 1;
            cnt[a]++;
            cnt[b]++;
        }

        int ans = 0;
        for(int a = 0; a < n; a++){
            for(int b = a + 1; b < n; b++){
                ans = max(ans, cnt[a] + cnt[b] - g[a][b]);
            }
        }
        return ans;
    }
};

int main(){}