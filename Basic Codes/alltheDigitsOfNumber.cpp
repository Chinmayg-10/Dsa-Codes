#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n>0){
        int digit=n%10;
        n=n/10;
        cout<<digit<<" ";
    }
}