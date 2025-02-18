#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>=0;j--){
            cout<<" ";
        }
        for(int col=1;col<=i+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int col=0;col<i;col++){
            cout<<" ";
        }
        for(int col=0;col<n-i;col++){
            cout<<" *";
        }
        cout<<endl;
    }

}