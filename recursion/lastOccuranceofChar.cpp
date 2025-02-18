#include<iostream>
using namespace std;
int solve(string input,char x,int n,int index){
    //base case
    if(input[index]==x){
        return index;
    }
    return solve(input,x,n,index-1);
}
int main(){
    string input="abcddeffg";
    char x='f';
    int n=input.length()-1;
    int ans=solve(input,x,n,n-1);
    cout<<ans<<endl;
}