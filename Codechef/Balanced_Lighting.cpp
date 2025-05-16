#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    vector<int> nums(N);
	    int Zeros = 0;
	    int Ones = 0;
	    int Twos = 0;
	    for(int i = 0; i<nums.size(); i++){
	        cin>>nums[i];
	        if(nums[i] == 0) Zeros++;
	        else if(nums[i] == 1) Ones++;
	        else if(nums[i] == 2) Twos++;
	    }
	    
	    int temp = abs(Ones - Twos);
	    int ans = Zeros - temp;
	    if(ans%2==0 && ans>=0){
	        cout<<"Yes"<<endl;
	    }else{
            cout<<"No"<<endl;
        }
	    

	}
	
	return 0;

}
