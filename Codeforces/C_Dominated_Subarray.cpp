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
int solve(vector<int> &nums, int n){
    int num = nums[n-1];
    int freq = 0;
    unordered_map<int,int> mp;
    
}

int main(){
    fastio();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);

        for(int i = 0; i<n; i++){
            cin>>nums[i];
        }
        solve(nums, n);
        cout << endl;
    }
    return 0;
}