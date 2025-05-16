#include <bits/stdc++.h>
using namespace std;

int MaxElement(vector<int> &nums){
    int Index = -1;
    int maxi = INT_MIN;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > maxi){
            maxi = nums[i];
            Index = i;
        }
    }
    return Index;
}

int solve(vector<int> &nums){
    int ans = 0;
    int leftMost = 0;

    int N = nums.size() / 2;
    for(int i = 0; i < N; i++){ // ✅ Only N times
        int Index = MaxElement(nums);
        ans += nums[Index];
        nums[Index] = 0;

        while(leftMost < nums.size() && nums[leftMost] == 0){
            leftMost++;
        }
        if(leftMost < nums.size()){
            nums[leftMost] = 0;
            leftMost++;
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;

        vector<int> nums(2 * N);
        for(int i = 0; i < 2 * N; i++){
            cin >> nums[i];
        }

        int ans = solve(nums);
        cout << ans << '\n';
    }

    return 0;
}
