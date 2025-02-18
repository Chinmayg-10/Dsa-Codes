#include<iostream>
using namespace std;
void solve(string input,int n,int i){
    //base case
    if(i==n){
        return;
    }
    char x=input[i];
    solve(input,n,i+1);
    cout<<x;
    
}
int main(){
    string input="Chinmay";
    int n=input.length();
    solve(input,n,0);
}