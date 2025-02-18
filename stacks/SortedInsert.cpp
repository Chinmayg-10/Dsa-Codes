#include<iostream>
#include<stack>
using namespace std;
void SortedInsert(stack<int>& s,int val){
    //base case
    if(s.empty()){
        s.push(val);
        return;
    }
    if( !s.empty() && s.top()<val){
        s.push(val);
        return;
    }
    // 1 case
    int topElement=s.top();
    s.pop();

    SortedInsert(s,val);

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

    int val=7;
    SortedInsert(s,val);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;


}