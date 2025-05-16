#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int t = *max_element(a.begin(), a.end());
    if (count(a.begin(), a.end(), t) == n) {
        cout << "No\n";
        return;
    }
    
    cout << "Yes\n";
    for (int i = 0; i < n; i++) {
        if (a[i] != t) {
            cout << "1 ";
        } else cout << "2 ";
    }
    cout << "\n";
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}
