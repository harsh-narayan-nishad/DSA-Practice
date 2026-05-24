#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    set<vector<int>> seen;

    // Insert some rows
    seen.insert({1, 1, 0, 1});
    seen.insert({1, 0, 0, 1});
    seen.insert({1, 1, 0, 1});  // Duplicate, won't be added again

    // Convert to vector
    vector<vector<int>> result(seen.begin(), seen.end());

    // Print the result
    for (const auto &row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "$ ";
    }

    return 0;
}
