// Number of Equivalent Domino Pairs

#include <iostream>
#include <vector>
using namespace std;
//  TLE
// class Solution {
// public:
//     int numEquivDominoPairs(vector<vector<int>>& d) {
//         int ans = 0;
//         for(int j = 0; j < d.size(); j++) {
//             for(int i = 0; i < j; i++) {
//                 if(((d[i][0] == d[j][0]) && (d[i][1] == d[j][1])) || 
//                    ((d[i][1] == d[j][0]) && (d[i][0] == d[j][1]))) {
//                     ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count[10][10] = {0}; // since values are 1 to 9
        int ans = 0;

        for (auto& d : dominoes) {
            int a = d[0], b = d[1];
            if (a > b) swap(a, b); // normalize by sorting the pair
            ans += count[a][b];
            count[a][b]++;
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> dominoes = {
        {1, 2},
        {2, 1},
        {3, 4},
        {5, 6},
        {4, 3}
    };

    int result = sol.numEquivDominoPairs(dominoes);
    cout << "Number of equivalent domino pairs: " << result << endl;

    return 0;
}
