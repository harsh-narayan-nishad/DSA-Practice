#include <bits/stdc++.h>
using namespace std;

void reverse(int l, int r, vector<int> &nums){
    if(l>=r){
        return;
    }
    swap(nums[l], nums[r]);
    reverse(++l,--r,nums);
}

int main() {
    vector<int> nums = {1,2,3,4,5};
    int l  = 0;
    int r = nums.size()-1;

    reverse(l, r,nums);
    for(int i  = 0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}