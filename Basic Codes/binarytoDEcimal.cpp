#include<iostream>
#include<cmath>
using namespace std;
int binarytodecimal(int n){
    int decimal=0;
    int i=0;
    while(n>0){
        int bit=n%10;
        decimal= bit*pow(2,i++)  + decimal;
        n=n/10;
    }
    return decimal;
}
int main(){
    int n;
    cin>>n;
    cout<<binarytodecimal(n)<<endl;
}