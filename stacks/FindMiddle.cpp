  #include<iostream>
#include<stack>
using namespace std;
void FindMiddleElement(stack<int>s , int count){
    //base case
    if(count==0){
        cout<<s.top()<<endl;
        return;
        
    }
    int TopElement=s.top();
    s.pop();
    count--;

    //recursion
    FindMiddleElement(s,count);

    //backtracking
    s.push(TopElement);
    
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int n=s.size()/2;

    FindMiddleElement(s,n);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}