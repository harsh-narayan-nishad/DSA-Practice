// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define all(x) (x).begin(), (x).end()
// #define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
// ll gcd(ll a, ll b){
//     return b ? gcd(b, a % b) : a;
// }
// void solve(){
    
// }
// int main(){
//     fastio();
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

// Custom GCD function (safe on all compilers)
int getGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int get_gcd_array(const vector<int>& arr) {
    int g = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        g = getGCD(g, arr[i]);
    }
    return g;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        bool found = false;

        for (int split = 1; split < n; ++split) {
            vector<int> B, C;
            vector<int> result(n);
            for (int i = 0; i < n; ++i) {
                if (i < split) {
                    C.push_back(a[i]);
                    result[i] = 2;
                } else {
                    B.push_back(a[i]);
                    result[i] = 1;
                }
            }

            int g1 = get_gcd_array(B);
            int g2 = get_gcd_array(C);

            if (g1 != g2) {
                cout << "Yes\n";
                for (int x : result) cout << x << ' ';
                cout << '\n';
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "No\n";
        }
    }

    return 0;
}
