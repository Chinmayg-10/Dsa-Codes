#include<iostream>
using namespace std;
void counting(int n){
    if(n==0){
        return;
    }
    // cout<<n<<" ";
    counting(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    counting(n);
}