#include<iostream>
using namespace std;
int prime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a;
    cin>>a;
    for(int i=2;i<a;i++){
        bool isprime=prime(i);
        if(isprime){
            cout<<i<<" "<<endl;
        }
        
    }
    
}