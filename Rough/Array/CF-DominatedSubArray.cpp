/*
Let's call an array 𝑡
dominated by value 𝑣
 in the next situation.


At first, array 𝑡
 should have at least 2
 elements.


Then 𝑡
 is dominated (by 𝑣
) if (and only if) 𝑜𝑐𝑐(𝑣)>𝑜𝑐𝑐(𝑣′)
 for any other number 𝑣′
.

*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
ll gcd(ll a, ll b){
    return b ? gcd(b, a % b) : a;
}
void solve(){
    
}
int main(){
    fastio();
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}