#include<iostream>
#include<stack>
using namespace std;
void InsertAtBottom(stack<int>& s,int val){
    //base case
    if(s.empty()){
        s.push(val);
        return;
    }
    //1 case
    int TopElement=s.top();
    s.pop();

    InsertAtBottom(s,val);
 
    //backtracking
    s.push(TopElement);
}
void reverseAStack(stack<int>& s){
    if(s.empty()){
        return;
    }
    int topElement=s.top();
    s.pop();

    reverseAStack(s);

    //backtracking
    InsertAtBottom(s,topElement);
    
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    reverseAStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl; 
}