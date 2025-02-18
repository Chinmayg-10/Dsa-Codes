#include<iostream>
using namespace std;
int main(){
    int n=25;
    int setCount=0;
    while(n!=0){
        if((n & 1)==1){
            setCount++;

        }
        n=n>>1;
    }
    cout<<setCount;
}