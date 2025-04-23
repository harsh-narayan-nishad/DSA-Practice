#include<bits/stdc++.h>
using namespace std;

void insertSubArray(vector<int> &nums, vector<vector<int>> &sub, int start, int end){
    vector<int> temp;
    for(int i = start; i<=end; i++){
        sub.push_back(temp);
    }
    return;
}

void printSubArray(vector<vector<int>> &sub){
    
}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    vector<vector<int>> subarray;

    for(int i = 0; i<nums.size(); i++){
        for(int j=i; j<nums.size(); j++){
            insertSubArray(nums,subarray, i, j);
        }
    }

    
    return 0;
}