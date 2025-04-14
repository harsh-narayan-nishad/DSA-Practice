#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans = "";
        bool flag = false;
        for(int i=number.size()-1; i>=0; i--){
            if(number[i]== digit){
                number[i]='a';
                break;
            }
        }

        for(int i =0; i<number.size(); i++){
            if(number[i]!='a'){
                ans+=number[i];
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string number = "1231";
    char digit = '1';
    string result = sol.removeDigit(number, digit);
    cout << "Result: " << result << endl;
    return 0;
}
