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

vector<int> to_base_b(int num, int b){
    vector<int> digits;
    while(num>0){
        digits.push_back(num%b);
        num/=b;
    }
    reverse(digits.begin(), digits.end());
    return  digits;
    
}

int main(){
    fastio();
    int t;
    cin >> t;
    while(t--){
        int num,b;
        num = 23;
        b = 8;
        vector<int> ans = to_base_b(num,b);
        for(int i:ans){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}