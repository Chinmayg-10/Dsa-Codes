#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>& s,int val){
    //base case
    if(s.empty()){
        s.push(val);
        return;
    }
    int topElement=s.top();
    s.pop();

    //recursion
    insertAtBottom(s,val);

    //backtracking
    s.push(topElement);

}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int val=13;

    insertAtBottom(s,val);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl; 
    

}