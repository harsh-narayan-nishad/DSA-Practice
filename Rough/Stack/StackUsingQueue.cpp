#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1,q2;

    public:
    void push(int x){
        q2.push(x);

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    void pop(){
        
    }


};
int main(){

    return 0;
}