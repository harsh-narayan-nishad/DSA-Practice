#include<bits/stdc++.h>
using namespace std;

// for(int i = 0; i<pq.size(); i++)
// here pq.size() is reducing continuously as pq.pop() is performed so per iteratiojn 
// it will shrink and all elements could not be traversed.
int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);

    int n = pq.size();
    for(int i = 0; i<n; i++){
        int top = pq.top();
        cout<<top<<" ";
        pq.pop();
    }
    
    return 0;
}