#include<iostream>
using namespace std;
void digits(int n){
    if(n==0){
        return;
    }
    int digit=n%10;
    int restNo=n/10;
    digits(restNo);
    cout<<digit<<" ";
}
int main(){
    int n;
    cin>>n;
    digits(n);

}