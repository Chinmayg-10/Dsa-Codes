#include<iostream>
#include<stack>
using namespace std;
bool CheckSorted(stack<int>s,int E1){
    //base case
    if(s.empty()){
        return true;
    }

    //1 case
    int Element2=s.top();
    s.pop();
    if(E1>Element2){
        return CheckSorted(s,Element2);
    }
    else{
        return false;
    }
    
    
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int Element1=INT32_MAX;
    cout<<CheckSorted(s,Element1)<<endl;

}