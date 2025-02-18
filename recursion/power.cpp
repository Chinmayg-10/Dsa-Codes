#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int finalAns=2*power(n-1);
    return finalAns;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
}