#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(auto num:nums){
            s.insert(num);
        }
        int i = 0;
        for(auto num:s){
            nums[i] = num;
            i++;
        }
        return i;
        
    }
};

int main(){
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int length = s.removeDuplicates(nums);
    for(int i = 0; i<length; i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}