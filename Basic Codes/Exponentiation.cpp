#include<iostream>
using namespace std;
int slowExponentiation(int x,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*x;
    }
    return ans;
}
int fastExponentiation(int x,int b){
    int ans=1;
    while(b>0){
        if(b&1){
            // b is odd
            ans=ans*x;
        }
        x=x*x;
        b=b>>1;
    }
    return ans;
}


int main(){
    cout<<slowExponentiation(5,4)<<endl;
    cout<<fastExponentiation(5,4)<<endl;
}