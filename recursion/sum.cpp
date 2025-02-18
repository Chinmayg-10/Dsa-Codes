#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int ans=n;
    ans=ans+sum(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int ans=sum(n);
    cout<<ans;


}