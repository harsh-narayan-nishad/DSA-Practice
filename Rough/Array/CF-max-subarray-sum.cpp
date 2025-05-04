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
int solve(vector<int> &nums){
    int maxSum = INT_MIN;
    for(int i = 0; i<nums.size(); i++){
        int sum = 0;
        for(int j = i; j<nums.size(); j++){
            sum+=nums[j];

            if(sum>maxSum){
                maxSum = sum;
            }
        }
    }

    return maxSum;
}
int main(){
    fastio();
    int n;
    cin>>n;
    vector<int> nums(n);
    
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    int ans = solve(nums);
    cout<<ans<<endl;
    return 0;
}