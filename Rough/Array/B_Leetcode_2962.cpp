#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int> &nums, int k, int start, int end, long long &ans, int maxElement){
        int count = 0;
        for(int i = start; i <= end; i++){
            if(nums[i] == maxElement){
                count++;
            }
        }

        if(count >= k){
            ans++;
        }

        return;
    }

    long long countSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        long long maxElement = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxElement){
                maxElement = nums[i];
            }
        }
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + k - 1; j < nums.size(); j++){
                solve(nums, k, i, j, ans, maxElement);
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 2, 3, 3};
    int k = 2;

    long long result = sol.countSubarrays(nums, k);
    cout << "Number of valid subarrays: " << result << endl;

    return 0;
}
