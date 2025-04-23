
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool isPrime(ll num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (ll i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

void solve(string x, int k) {
    string y;
    for (int i = 0; i < k; ++i) {
        y += x;
    }

    
    if (y.size() > 18) { 
        cout << "NO";
        return;
    }

    ll num = stoll(y);
    if (isPrime(num)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        string x;
        int k;
        cin >> x >> k;
        solve(x, k);
        cout << endl;
    }
    return 0;
}
