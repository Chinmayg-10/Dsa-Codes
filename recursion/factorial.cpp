#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;
}
int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans;

}