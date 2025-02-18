#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char>s;
    string name="amitlala";

    //insertion in stack
    for(int i=0;i<name.length();i++){
        char ch=name[i];
        s.push(ch);
    }

    //retrieval of data from stack
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}